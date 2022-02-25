CC=g++
CFLAGS=-Iinclude -fPIC -Llib
CXXSOURCES:=$(shell find src -name '*.cxx')
OBJS:=${CXXSOURCES:.cxx=.o}

all: libdiscord.so

%.o: %.cxx
	$(CC) $(CFLAGS) -lz -lcrypto -lssl -lboost_system -lboost_coroutine -lboost_log -lrestc-cpp -lboost_chrono -c $< -o $@

libdiscord.so: $(OBJS)
#	ar rcs $@ $^
	g++ -shared -o $@ $^

.PHONY: clean

clean:
	rm -rf src/*.o src/*/*.o libdiscord.so