CXX ?= g++
CXXFLAGS ?= -std=c++17 -O2 -Wall -Wextra -Wpedantic

rpf9_list: rpf9_list.cpp packfile_rpf9.cpp packfile_rpf9.h
	$(CXX) $(CXXFLAGS) -o $@ rpf9_list.cpp packfile_rpf9.cpp

check: rpf9_list
	./rpf9_list --selftest

clean:
	rm -f rpf9_list

.PHONY: check clean
