EXENAME = Chess
OBJS = Chess.o Piece.o main.o
CXX = clang++
CXXFLAGS = $(CS225) -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lc++abi -lm

# Custom Clang version enforcement logic:
ccred=$(shell echo -e "\033[0;31m")
ccyellow=$(shell echo -e "\033[0;33m")
ccend=$(shell echo -e "\033[0m")

IS_CORRECT_CLANG=$(shell clang -v 2>&1 | grep "version 6")


.PHONY: all clean output_msg

all : $(EXENAME)

$(EXENAME): output_msg $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp

Chess.o: main.cpp Chess.cpp 
	$(CXX) $(CXXFLAGS) main.cpp Chess.cpp

Piece.o: main.cpp Piece.cpp
	$(CXX) $(CXXFLAGS) main.cpp Piece.cpp

clean:
	-rm -f *.o $(EXENAME) test


