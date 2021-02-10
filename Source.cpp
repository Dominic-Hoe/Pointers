#include<iostream>

// Standard logging function for outputting text to a console window
#define LOG(x) std::cout << x << std::endl;

int main() {
	int var = 8;
	// * represents a pointer, pointers are integers (references to memory addresses)
	// & asks var "Hey, what is your memory address?"
	// ptr is essentially the same as var now

	// In essence, a pointer is the same as a variable, except that a pointer holds a memory address as opposed to a value.
	// Pointers are typeless, so long as you cast the value of the pointer to the type of the pointer (as shown below)...
	// everything will be fine.
	// double* ptr = (double*)&var;
	int* ptr = &var;
	*ptr = 10;
	// As mentioned before, ptr is just a reference to var. Pointers store memory addresses, which can be read from and written to.
	// The "*ptr" shown above is known as "dereferencing" the pointer, meaning that what's *actually* being overwritten is the
	// original value var. When logging var, the output will be 10.

	// In essence, what's happening here is calling *ptr says "Hey, get me this variable from this memory address" and then that
	// memory address can be written to/read from.
	LOG(var);
	LOG(*ptr);
	// This yields 1, which, in boolean sense, means yes, because 0 = false and 1 = true. "var" is the same as "ptr" because
	// "ptr" is just a reference to var!
	LOG((var == *ptr));
	std::cin.get();
	return 0;
}