gethostbyname: gethostbyname.cpp
	$(CXX) -Wall -Wextra -pedantic -o $@ -O2 -DNDEBUG $<
