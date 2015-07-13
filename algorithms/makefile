CC=g++
CFLAGS=-Wall -Wno-sign-compare -Wno-vla -pedantic -std=c++11 -g
SOURCES=$(wildcard *.cpp)
OUTPUTS=$(SOURCES:.cpp=)

all: $(OUTPUTS)

%: %.cpp
	$(CC) $(CFLAGS) $< -o $@.out

clean: 
	rm *.out
