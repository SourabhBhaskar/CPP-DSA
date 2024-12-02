// Purpose of Comments
// -------------------
    // - Help human readers understand the code.
    // - Used to summarize algorithms, clarify variables, or explain unclear code.
    // - The compiler ignores comments, so they don’t affect performance or behavior.




// Importance
// -----------
    // - Incorrect comments can mislead readers. 
    // - Always update comments when code changes.




// Single-line comments (//)
// -------------------------
    // - Start with "//" and continue until the end of the line.
    // - Used for short explanations or remarks.
    // - Example: // This is a single-line comment




// Multiline comments (/* ... */)
// ------------------------------
    // - Start with /* and end with */.
    // - Can span multiple lines and include any text (except */).
    // - Example
            /* This is a
            multiline comment */




// Style Tips
// ----------
    // - For multiline comments, each line may begin with * for clarity.
    // - Single-line comments are generally used for brief remarks.
    // - Multiline comments are used for longer explanations.




// Important Rules
// ---------------
    // - No Nesting of Comment Pairs
    // - A comment pair (/* ... */) cannot be nested inside another.
    // - Example of error: /* This is a comment /* nested comment */ */
    // - This will cause a compiler error.




// Commenting Out Code
// -------------------
    // - For debugging, use single-line comments for blocks of code.
    // - Example
        // /*
        // code inside comment block
        // */




#include <iostream>
/*
* Simple main function:
* Read two numbers and print their sum
*/
int main() {
    // Prompt user for input
    std::cout << "Enter two numbers:" << std::endl;

    int v1 = 0, v2 = 0; // Variables for input
    std::cin >> v1 >> v2; // Read input
    std::cout << "The sum is " << v1 + v2 << std::endl; // Output sum

    return 0;
}