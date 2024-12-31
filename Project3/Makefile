# Makefile for Cygwin

# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -std=c++11 -Wall -Wextra

# Forced Targets
.PHONY: run test eval clean

# Linking Targets
r.out: main.o point.o
	$(CXX) $(CXXFLAGS) -o r.out main.o point.o

a.out: test.o point.o
	$(CXX) $(CXXFLAGS) -o a.out test.o point.o

e.out: evaluation.o point.o
	$(CXX) $(CXXFLAGS) -o e.out evaluation.o point.o

# Compilation of Files
%.o: %.cpp point.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Forced Targets to Run
run: r.out
	./r.out

test: a.out
	./a.out

eval: e.out
	./e.out

clean:
	rm -f r.out e.out a.out *.o
