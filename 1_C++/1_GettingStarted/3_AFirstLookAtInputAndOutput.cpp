// C++ I/O Library
// ---------------
    // - C++ does not have built-in statements for input and output. Instead, it provides a standard library for I/O.
    // - istream for input.
    // - ostream for output.




// Standard Input and Output
// -------------------------
    // - cin: Standard input object (of type istream).
    // - cout: Standard output object (of type ostream).
    // - cerr: Standard error stream, used for error messages.
    // - clog: Standard logging stream, used for general information.




// How I/O Works
// -------------
    // - A stream is a sequence of characters read from or written to an I/O device.
    // - cin is used to read input and cout, cerr, or clog are used to write output.
    // - #include <iostream>: Includes the iostream library for I/O operations.
    // - std::cout << "Message": Outputs a message to the standard output.
    // - std::cin >> v1 >> v2: Reads two values from input into v1 and v2.
    #include <iostream>
    int main() {
        // std::cout << "Enter two numbers:" << std::endl;
        // int v1 = 0, v2 = 0;
        // std::cin >> v1 >> v2;
        // std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
        return 0;
    }




// Stream Operators
// -----------------
    // Output operator <<: Sends data to the output stream (e.g., std::cout).
    // Input operator >>: Reads data from the input stream (e.g., std::cin).
    // Chaining Output: Multiple << operators can be chained to output multiple values in one statement:
    // Example : std::cout<<"Sourabh"<<"Bhaskar"<<std::endl;




// Notes
// -----
    // - Names like cout and endl are part of the std namespace, so we need to use std::cout and std::endl unless we specify otherwise.
    // - std::endl: Ends the current line and flushes the output buffer to ensure that output is written immediately.
    // - Flushing helps avoid loss of output, especially during debugging or if the program crashes unexpectedly