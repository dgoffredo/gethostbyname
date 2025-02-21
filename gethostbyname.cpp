extern "C" {
#include <arpa/inet.h>
#include <netdb.h>
} // extern "C"

#include <algorithm>
#include <iostream>
#include <string_view>

void usage(std::ostream& out, const char *argv0) {
    out << "usage: " << argv0 << " <hostname>\n";
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        usage(std::cerr, argv[0]);
        return 1;
    }
    const std::string_view arg = argv[1];
    if (arg == "-h" || arg == "--help") {
        usage(std::cout, argv[0]);
        return 0;
    }

    const hostent *host = gethostbyname(arg.data());
    if (!host) {
        const int err = h_errno;
        const char *message;
        switch (err) {
        case HOST_NOT_FOUND: message = "[HOST_NOT_FOUND] No such host is known."; break;
        case NO_DATA: message = "[NO_DATA] The server recognized the request and the name, but no address is available. Another type of request to the name server for the domain might return an answer."; break;
        case NO_RECOVERY: message = "[NO_RECOVERY] An unexpected server failure occurred which cannot be recovered."; break;
        case TRY_AGAIN: message = "[TRY_AGAIN] A temporary and possibly transient error occurred, such as a failure of a server to respond. "; break;
        default: message = "unknown error";
        }
        std::cerr << message << '\n';
        return err;
    }

    char buffer[std::max(INET_ADDRSTRLEN, INET6_ADDRSTRLEN)];
    for (char **iter = host->h_addr_list; *iter; ++iter) {
        std::cout << inet_ntop(host->h_addrtype, *iter, buffer, sizeof buffer) << '\n';
    }
}
