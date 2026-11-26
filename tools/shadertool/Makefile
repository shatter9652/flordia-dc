CXX ?= g++
CXXFLAGS ?= -std=c++17 -O2 -Wall -Wextra -Wpedantic

shadertool: main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f shadertool

.PHONY: clean
