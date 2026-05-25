CMP := g++
SRC := sbox.hpp
main_src := EXAMPLES/sbox_test.cpp
p_name = sbox

all:
	$(CMP) $(SRC) $(main_src) -o sbox
clean:
	rm sbox
