#include <plog/Log.h> //Step 1 - Include the logger header (Update project include paths for use)
                                                    //EG. C:/<path>/plog-<version>/include/
#include <iostream>

int getUserInput() {
    LOGD << "getUserInput() called"; //LOGD is defined by the plog library

    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    plog::init(plog::debug, "Logfile.txt"); //Step 2 - Initialize the debugger w/ output file
    //plog::init(plog::none, "Logfile.txt"); //This turns off the debugging messages for the most part

    LOGD << "main() called"; //Step 3 - Output to the log as if outputting to the console

    int x{ getUserInput() };
    std::cout << "You entered: " << x;

    return 0;
}
