# Makefile for Guess Number Game

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
TARGET = guess_number
SOURCE = guess_number.cpp

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCE)

clean:
	rm -f $(TARGET) *.o

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
