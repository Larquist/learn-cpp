// Use double quotes to include header files that you’ve written or are expected to be found in the current directory. 
// Use angled brackets to include headers that come with your compiler, OS, or third-party libraries you’ve installed 
// elsewhere on your system.
#include "add.h" // Best practice to order header files as so: Your headers, 3rd party headers, then standard library headers
#include <iostream>

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
    return 0;
}

//Always include header guards(we’ll cover these next lesson).
//Do not define variablesand functions in header files(global constants are an exception -- we’ll cover these later)
//Give your header files the same name as the source files they’re associated with(e.g.grades.h is paired with grades.cpp).
//Each header file should have a specific job, and be as independent as possible.For example, you might put all your declarations related to functionality A in A.hand all your declarations related to functionality B in B.h.That way if you only care about A later, you can just include A.h and not get any of the stuff related to B.
//Be mindful of which headers you need to explicitly include for the functionality that you are using in your code files
//Every header you write should compile on its own(it should #include every dependency it needs)
//Only #include what you need(don’t include everything just because you can).
//Do not #include.cpp files.