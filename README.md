```console
david@dell:~/src/gethostbyname$ make
g++ -Wall -Wextra -pedantic -o gethostbyname -O2 -DNDEBUG gethostbyname.cpp

david@dell:~/src/gethostbyname$ ./gethostbyname localhost
127.0.0.1

david@dell:~/src/gethostbyname$ ./gethostbyname google.com
142.250.80.46

david@dell:~/src/gethostbyname$ ./gethostbyname denmark-4
[NO_RECOVERY] An unexpected server failure occurred which cannot be recovered.

david@dell:~/src/gethostbyname$ strace ./gethostbyname denmark-4
execve("./gethostbyname", ["./gethostbyname", "denmark-4"], 0x7ffdd574bfb8 /* 66 vars */) = 0
brk(NULL)                               = 0x5f3073d93000
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7cc781e8b000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=81963, ...}) = 0
mmap(NULL, 81963, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7cc781e76000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libstdc++.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=2592224, ...}) = 0
mmap(NULL, 2609472, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7cc781a00000
mmap(0x7cc781a9d000, 1343488, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x9d000) = 0x7cc781a9d000
mmap(0x7cc781be5000, 552960, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1e5000) = 0x7cc781be5000
mmap(0x7cc781c6c000, 57344, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x26b000) = 0x7cc781c6c000
mmap(0x7cc781c7a000, 12608, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7cc781c7a000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\220\243\2\0\0\0\0\0"..., 832) = 832
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
fstat(3, {st_mode=S_IFREG|0755, st_size=2125328, ...}) = 0
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
mmap(NULL, 2170256, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7cc781600000
mmap(0x7cc781628000, 1605632, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x28000) = 0x7cc781628000
mmap(0x7cc7817b0000, 323584, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1b0000) = 0x7cc7817b0000
mmap(0x7cc7817ff000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1fe000) = 0x7cc7817ff000
mmap(0x7cc781805000, 52624, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7cc781805000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libm.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=952616, ...}) = 0
mmap(NULL, 950296, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7cc781d8d000
mmap(0x7cc781d9d000, 520192, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x10000) = 0x7cc781d9d000
mmap(0x7cc781e1c000, 360448, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x8f000) = 0x7cc781e1c000
mmap(0x7cc781e74000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xe7000) = 0x7cc781e74000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libgcc_s.so.1", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=183024, ...}) = 0
mmap(NULL, 185256, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7cc781d5f000
mmap(0x7cc781d63000, 147456, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x4000) = 0x7cc781d63000
mmap(0x7cc781d87000, 16384, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x28000) = 0x7cc781d87000
mmap(0x7cc781d8b000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x2b000) = 0x7cc781d8b000
close(3)                                = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7cc781d5d000
mmap(NULL, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7cc781d5a000
arch_prctl(ARCH_SET_FS, 0x7cc781d5a740) = 0
set_tid_address(0x7cc781d5aa10)         = 2677962
set_robust_list(0x7cc781d5aa20, 24)     = 0
rseq(0x7cc781d5b060, 0x20, 0, 0x53053053) = 0
mprotect(0x7cc7817ff000, 16384, PROT_READ) = 0
mprotect(0x7cc781d8b000, 4096, PROT_READ) = 0
mprotect(0x7cc781e74000, 4096, PROT_READ) = 0
mprotect(0x7cc781c6c000, 45056, PROT_READ) = 0
mprotect(0x5f3066890000, 4096, PROT_READ) = 0
mprotect(0x7cc781ec9000, 8192, PROT_READ) = 0
prlimit64(0, RLIMIT_STACK, NULL, {rlim_cur=8192*1024, rlim_max=RLIM64_INFINITY}) = 0
munmap(0x7cc781e76000, 81963)           = 0
futex(0x7cc781c7a7bc, FUTEX_WAKE_PRIVATE, 2147483647) = 0
getrandom("\xa7\x45\x3c\x34\x6f\x2c\xca\x54", 8, GRND_NONBLOCK) = 8
brk(NULL)                               = 0x5f3073d93000
brk(0x5f3073db4000)                     = 0x5f3073db4000
newfstatat(AT_FDCWD, "/etc/resolv.conf", {st_mode=S_IFREG|0644, st_size=948, ...}, 0) = 0
openat(AT_FDCWD, "/etc/host.conf", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=92, ...}) = 0
read(3, "# The \"order\" line is only used "..., 4096) = 92
read(3, "", 4096)                       = 0
close(3)                                = 0
futex(0x7cc78180b66c, FUTEX_WAKE_PRIVATE, 2147483647) = 0
openat(AT_FDCWD, "/etc/resolv.conf", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=948, ...}) = 0
read(3, "# This is /run/systemd/resolve/s"..., 4096) = 948
read(3, "", 4096)                       = 0
fstat(3, {st_mode=S_IFREG|0644, st_size=948, ...}) = 0
close(3)                                = 0
socket(AF_UNIX, SOCK_STREAM|SOCK_CLOEXEC|SOCK_NONBLOCK, 0) = 3
connect(3, {sa_family=AF_UNIX, sun_path="/var/run/nscd/socket"}, 110) = -1 ENOENT (No such file or directory)
close(3)                                = 0
socket(AF_UNIX, SOCK_STREAM|SOCK_CLOEXEC|SOCK_NONBLOCK, 0) = 3
connect(3, {sa_family=AF_UNIX, sun_path="/var/run/nscd/socket"}, 110) = -1 ENOENT (No such file or directory)
close(3)                                = 0
newfstatat(AT_FDCWD, "/etc/nsswitch.conf", {st_mode=S_IFREG|0644, st_size=605, ...}, 0) = 0
newfstatat(AT_FDCWD, "/", {st_mode=S_IFDIR|0755, st_size=4096, ...}, 0) = 0
openat(AT_FDCWD, "/etc/nsswitch.conf", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=605, ...}) = 0
read(3, "# /etc/nsswitch.conf\n#\n# Example"..., 4096) = 605
read(3, "", 4096)                       = 0
fstat(3, {st_mode=S_IFREG|0644, st_size=605, ...}) = 0
close(3)                                = 0
openat(AT_FDCWD, "/etc/hosts", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=219, ...}) = 0
lseek(3, 0, SEEK_SET)                   = 0
read(3, "127.0.0.1 localhost\n127.0.1.1 de"..., 4096) = 219
read(3, "", 4096)                       = 0
close(3)                                = 0
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=81963, ...}) = 0
mmap(NULL, 81963, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7cc781e76000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libnss_mdns4_minimal.so.2", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=18664, ...}) = 0
mmap(NULL, 20496, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7cc781d54000
mmap(0x7cc781d55000, 8192, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1000) = 0x7cc781d55000
mmap(0x7cc781d57000, 4096, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7cc781d57000
mmap(0x7cc781d58000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7cc781d58000
close(3)                                = 0
mprotect(0x7cc781d58000, 4096, PROT_READ) = 0
munmap(0x7cc781e76000, 81963)           = 0
socket(AF_INET, SOCK_DGRAM|SOCK_CLOEXEC|SOCK_NONBLOCK, IPPROTO_IP) = 3
setsockopt(3, SOL_IP, IP_RECVERR, [1], 4) = 0
connect(3, {sa_family=AF_INET, sin_port=htons(53), sin_addr=inet_addr("127.0.0.53")}, 16) = 0
poll([{fd=3, events=POLLOUT}], 1, 0)    = 1 ([{fd=3, revents=POLLOUT}])
sendto(3, "y3\1 \0\1\0\0\0\0\0\1\tdenmark-4\3nyc\2rr\3co"..., 49, MSG_NOSIGNAL, NULL, 0) = 49
poll([{fd=3, events=POLLIN}], 1, 5000)  = 1 ([{fd=3, revents=POLLIN}])
ioctl(3, FIONREAD, [110])               = 0
recvfrom(3, "y3\201\203\0\1\0\0\0\1\0\1\tdenmark-4\3nyc\2rr\3co"..., 1024, 0, {sa_family=AF_INET, sin_port=htons(53), sin_addr=inet_addr("127.0.0.53")}, [28 => 16]) = 110
close(3)                                = 0
socket(AF_INET, SOCK_DGRAM|SOCK_CLOEXEC|SOCK_NONBLOCK, IPPROTO_IP) = 3
setsockopt(3, SOL_IP, IP_RECVERR, [1], 4) = 0
connect(3, {sa_family=AF_INET, sin_port=htons(53), sin_addr=inet_addr("127.0.0.53")}, 16) = 0
poll([{fd=3, events=POLLOUT}], 1, 0)    = 1 ([{fd=3, revents=POLLOUT}])
sendto(3, "U\257\1 \0\1\0\0\0\0\0\1\tdenmark-4\6search\7ch"..., 57, MSG_NOSIGNAL, NULL, 0) = 57
poll([{fd=3, events=POLLIN}], 1, 5000)  = 1 ([{fd=3, revents=POLLIN}])
ioctl(3, FIONREAD, [121])               = 0
recvfrom(3, "U\257\201\203\0\1\0\0\0\1\0\1\tdenmark-4\6search\7ch"..., 1024, 0, {sa_family=AF_INET, sin_port=htons(53), sin_addr=inet_addr("127.0.0.53")}, [28 => 16]) = 121
close(3)                                = 0
socket(AF_INET, SOCK_DGRAM|SOCK_CLOEXEC|SOCK_NONBLOCK, IPPROTO_IP) = 3
setsockopt(3, SOL_IP, IP_RECVERR, [1], 4) = 0
connect(3, {sa_family=AF_INET, sin_port=htons(53), sin_addr=inet_addr("127.0.0.53")}, 16) = 0
poll([{fd=3, events=POLLOUT}], 1, 0)    = 1 ([{fd=3, revents=POLLOUT}])
sendto(3, "\335|\1 \0\1\0\0\0\0\0\1\tdenmark-4\0\0\1\0\1\0\0)\4\260"..., 38, MSG_NOSIGNAL, NULL, 0) = 38
poll([{fd=3, events=POLLIN}], 1, 5000)  = 1 ([{fd=3, revents=POLLIN}])
ioctl(3, FIONREAD, [38])                = 0
recvfrom(3, "\335|\205\202\0\1\0\0\0\0\0\1\tdenmark-4\0\0\1\0\1\0\0)\377\326"..., 1024, 0, {sa_family=AF_INET, sin_port=htons(53), sin_addr=inet_addr("127.0.0.53")}, [28 => 16]) = 38
close(3)                                = 0
socket(AF_INET, SOCK_DGRAM|SOCK_CLOEXEC|SOCK_NONBLOCK, IPPROTO_IP) = 3
setsockopt(3, SOL_IP, IP_RECVERR, [1], 4) = 0
connect(3, {sa_family=AF_INET, sin_port=htons(53), sin_addr=inet_addr("127.0.0.53")}, 16) = 0
poll([{fd=3, events=POLLOUT}], 1, 0)    = 1 ([{fd=3, revents=POLLOUT}])
sendto(3, "\335|\1 \0\1\0\0\0\0\0\1\tdenmark-4\0\0\1\0\1\0\0)\4\260"..., 38, MSG_NOSIGNAL, NULL, 0) = 38
poll([{fd=3, events=POLLIN}], 1, 5000)  = 1 ([{fd=3, revents=POLLIN}])
ioctl(3, FIONREAD, [38])                = 0
recvfrom(3, "\335|\205\202\0\1\0\0\0\0\0\1\tdenmark-4\0\0\1\0\1\0\0)\377\326"..., 1024, 0, {sa_family=AF_INET, sin_port=htons(53), sin_addr=inet_addr("127.0.0.53")}, [28 => 16]) = 38
close(3)                                = 0
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=81963, ...}) = 0
mmap(NULL, 81963, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7cc781e76000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libnss_mymachines.so.2", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=349272, ...}) = 0
mmap(NULL, 353208, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7cc781cfd000
mmap(0x7cc781d05000, 233472, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x8000) = 0x7cc781d05000
mmap(0x7cc781d3e000, 69632, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x41000) = 0x7cc781d3e000
mmap(0x7cc781d4f000, 16384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x51000) = 0x7cc781d4f000
mmap(0x7cc781d53000, 952, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7cc781d53000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libcap.so.2", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\340\201\0\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=51536, ...}) = 0
mmap(NULL, 49224, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7cc781cf0000
mmap(0x7cc781cf3000, 24576, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7cc781cf3000
mmap(0x7cc781cf9000, 8192, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x9000) = 0x7cc781cf9000
mmap(0x7cc781cfb000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xb000) = 0x7cc781cfb000
close(3)                                = 0
mprotect(0x7cc781cfb000, 4096, PROT_READ) = 0
mprotect(0x7cc781d4f000, 12288, PROT_READ) = 0
prctl(PR_CAPBSET_READ, CAP_MAC_OVERRIDE) = 1
prctl(PR_CAPBSET_READ, 0x30 /* CAP_??? */) = -1 EINVAL (Invalid argument)
prctl(PR_CAPBSET_READ, CAP_CHECKPOINT_RESTORE) = 1
prctl(PR_CAPBSET_READ, 0x2c /* CAP_??? */) = -1 EINVAL (Invalid argument)
prctl(PR_CAPBSET_READ, 0x2a /* CAP_??? */) = -1 EINVAL (Invalid argument)
prctl(PR_CAPBSET_READ, 0x29 /* CAP_??? */) = -1 EINVAL (Invalid argument)
munmap(0x7cc781e76000, 81963)           = 0
rt_sigprocmask(SIG_BLOCK, [HUP USR1 USR2 PIPE ALRM CHLD TSTP URG VTALRM PROF WINCH IO], [], 8) = 0
futex(0x7cc781d52b18, FUTEX_WAKE_PRIVATE, 2147483647) = 0
openat(AT_FDCWD, "/run/systemd/machines/denmark-4", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
rt_sigprocmask(SIG_SETMASK, [], NULL, 8) = 0
write(2, "[NO_RECOVERY] An unexpected serv"..., 78[NO_RECOVERY] An unexpected server failure occurred which cannot be recovered.) = 78
write(2, "\n", 1
)                       = 1
exit_group(3)                           = ?
+++ exited with 3 +++

david@dell:~/src/gethostbyname$ 
```
