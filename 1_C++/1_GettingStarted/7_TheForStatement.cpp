// for Loop
// --------
    // - The for loop is used to simplify the process when a loop involves a variable initialized, tested, and updated in a predictable way. It’s an abbreviation of the while loop when the loop control variable is initialized, tested, and incremented in a specific pattern.
    // - init-statement: Initializes the loop control variable (executed only once at the start).
    // - condition: The loop continues as long as this condition is true.
    // - expression: Executed after the loop body, typically used to update the loop control variable.
    // Syntax:
    // for (init-statement; condition; expression)
    //     statement;




// Example Program (Summing Numbers from 1 to 10)
// ----------------------------------------------
#include <iostream>
int main() {
    int sum = 0;
    // sum values from 1 through 10 inclusive
    for (int val = 1; val <= 10; ++val)
        sum += val; // equivalent to sum = sum + val
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}




// Explanation
// -----------
    // - sum is initialized to 0 to store the result.
    // - The for loop initializes val to 1, checks if val is less than or equal to 10, and increments val by 1 on each iteration.
    // - sum += val adds val to sum each time the loop executes.
    // - When val exceeds 10, the loop terminates, and the result is printed.



    
// Flow of Execution
// -----------------
    // - Initialization: val is initialized to 1 (int val = 1).
    // - Condition Test: val <= 10 is checked. If true, the loop body is executed.
    // - Loop Body: sum += val adds val to sum.
    // - Increment: After each iteration, val is incremented (++val).
    // - Repeat: Steps 2-4 are repeated until the condition is false.




// Advantages of for Loop
// ----------------------
    // - More compact and easier to read for loops with predictable initialization, condition checking, and updating steps.
    // - Initialization, condition checking, and incrementing happen in one place, making the code more concise.
