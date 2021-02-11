//Avoid using directives (such as using namespace std;) at the top of your program. They violate the reason why 
//namespaces were added in the first place.
#include <iostream>

using namespace std; // Avoid doing it this way as this may cause conflictions with own function names.

int main() {
	// cout << "Hello world!";		// Avoid this
	std::cout << "Hello world!";	// Use this! Best practice to use prefix as this is the reason nameaspaces were made in
									// the first place!
	return 0;
}