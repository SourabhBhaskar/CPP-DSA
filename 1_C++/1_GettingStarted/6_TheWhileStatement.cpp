// while Loop
// ----------
    // - The while loop repeatedly executes a block of code as long as a given condition is true.
    // - Condition: An expression that evaluates to either true or false.
    // - Statement: A block of code that gets executed as long as the condition is true.
    // - Syntax
    //     while (condition) {
    //         statement;
    //     }




// Example Program (Summing Numbers from 1 to 10)
// ----------------------------------------------
#include <iostream>
int main() {
    int sum = 0, val = 1;
    // keep executing the while as long as val is <= 10
    while (val <= 10) {
        sum += val;  // Adds val to sum
        ++val;       // Increments val by 1
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}




// Explanation of the Code
// -----------------------
// Initialilization
    // - sum starts at 0 (to store the result).
    // - val starts at 1 (to iterate through numbers 1 to 10).

// The while Loop
    // - The condition val <= 10 is checked. As long as val is less than or equal to 10, the loop executes.

// Inside the loop
    // - sum += val; adds val to sum (same as sum = sum + val;).
    // - ++val; increments val by 1.

// Loop Continuation
    // - After each iteration, val is incremented, and the condition is checked again.
    // - The loop stops when val exceeds 10.




// Key Concepts
// -------------
    // - Condition Testing: The loop keeps checking if the condition is true before executing the block.
    // - Compound Assignment: The += operator adds the right operand to the left and stores the result in the left operand.
    // - Increment Operator: The ++val adds 1 to val.
    // - Exiting the Loop: Once the condition becomes false (i.e., val exceeds 10), the program continues after the loop.