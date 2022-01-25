EXENAME = Chess
OBJS = Chess.o Piece.o
CXX = clang++
CXXFLAGS = $(CS225) -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lc++abi -lm

# Custom Clang version enforcement logic:
ccred=$(shell echo -e "\033[0;31m")
ccyellow=$(shell echo -e "\033[0;33m")
ccend=$(shell echo -e "\033[0m")

IS_CORRECT_CLANG=$(shell clang -v 2>&1 | grep "version 6")


.PHONY: all test clean output_msg

all : $(EXENAME)

$(EXENAME): output_msg $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

parksGraph.o: main.cpp parksGraph.cpp 
	$(CXX) $(CXXFLAGS) main.cpp parksGraph.cpp

test: output_msg tests.o parksGraph.o
	$(LD) tests.o parksGraph.o $(LDFLAGS) -o test

tests.o: tests/tests.cpp tests/catch.hpp
	$(CXX) $(CXXFLAGS) tests/tests.cpp

clean:
	-rm -f *.o $(EXENAME) test


