// Program to Sum User Input
// -------------------------
    // - In some cases, we want to read an unknown number of inputs until there is no more data (end-of-file or input error).
    // - The following program sums all input values until the end of input
    #include <iostream>
    int main() {
        int sum = 0, value = 0;
        // read until end-of-file, calculating a running total of all values read
        while (std::cin >> value)
            sum += value; // equivalent to sum = sum + value
        std::cout << "Sum is: " << sum << std::endl;
        return 0;
    }




// Explanation
// ----------
    // - The program defines two variables: sum for the total and value to hold each input number.
    // - The condition while (std::cin >> value) reads the next number from the input. If reading is successful, the loop continues. 
    // - If the input stream reaches EOF or encounters an error (like invalid input), the condition becomes false, and the loop ends.
    // - The sum of the values is printed after the loop.




// End-of-File (EOF)
// -----------------
    // - When input is from the keyboard, different operating systems use different methods to indicate EOF:
    // - Windows: Press Ctrl + Z, then Enter.
    // - UNIX/Mac OS X: Press Ctrl + D.




// Compiler Errors
// ---------------
    // - A compiler detects errors in the code but cannot check if the program's logic is correct. 
    // - Below are some common types of errors

// Syntax Errors
    // - These occur when there is a mistake in the code structure (e.g., missing parentheses, semicolons, etc.).
    int mainn ( { // error: missing )
        std::cout << "Read each file." << std::endl: // error: used colon, not semicolon
        std::cout << Update master. << std::endl; // error: missing quotes
        std::cout << "Write new master." std::endl; // error: second output operator missing
        return 0 // error: missing semicolon
    }

// Type Errors
    // - These occur when the type of a variable doesn't match the expected type (e.g., passing a string where an integer is expected).
    // - Declaration Errors: Every variable must be declared before use. 
    // - Common mistakes include misspelling variable names or forgetting to use the std:: prefix.
    void fun(){
        int v1 = 0, v2 = 0;
        std::cin >> v >> v2; // error: uses "v" not "v1"
    }





// Error Messages
// --------------
    // - Compiler error messages usually include the line number and a brief description of the issue.
    // - It's recommended to fix errors in the order they are reported, as one error can cause cascading issues.
    // - After fixing errors, recompile the program to check for further issues.