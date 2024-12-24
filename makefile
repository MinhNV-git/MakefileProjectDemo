# Makefile for C++ program 

# Compiler and flags 

CXX = g++
CXXFLAGS = -std=c++11 -Wall -O2
# Target and dependencies 
TARGET = myprogram 
OBJS = main.o func_a.o func_b.o comm.o 
# Build and run 
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<
# Cleanup 
clean:
	rm -f $(TARGET) $(OBJS)