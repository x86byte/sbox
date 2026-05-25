CMP := g++
SRC := sbox.hpp
main_src := EXAMPLES/sbox_test.cpp
main_src2 := EXAMPLES/sbox_test1.cpp
p_name = sbox

all:
	$(CMP) $(SRC) $(main_src) -o sbox
clean:
	rm sbox
test2:
	$(CMP) $(SRC) $(main_src2) -o sbox
