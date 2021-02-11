#include <iostream>		//This is an example of a preprocessor directive (directive)

#define MY_NAME "Alex"	//May see this in legacy code, not recommended anymore

#define PRINT_JOE

int main() {
	std::cout << "Hello world! My name is " << MY_NAME << '\n'; //This will translate the code to below:
	// std::cout << "Hello world! my name is " << "Alex" << '\n';

					//Conditional compilation:
#ifdef PRINT_JOE	//Also, #if defined(PRINT_JOE)
	std::cout << "Joe\n";
#endif

#ifdef PRINT_BOB
	std::cout << "Bob\n";
#endif

#ifndef PRINT_LARRY	//Also, #if !defined(PRINT_LARRY)
	std::cout << "Larry\n";
#endif

					//If 0 example - providing a way to convieniently comment out code with comment blocks within
	std::cout << "Joe\n";
#if 0				//Dont complile anything starting here
	std::cout << "Bob\n";
	std::cout << "Steve\n";
#endif				//Until this point

	return 0;
}