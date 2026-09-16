/*
 * Course: COEN 2210 - Introduction to Programming
 * Name: [Francisco H. Martinez Cruz]
 * Lab: 5 - Selection Structures
 * Description: [It gives an extra fee if the hours used is greater than 2.]
 * Due Date: [9/16/2026]
 */

 #include <iostream>                             // Provides cin, cout, and endl
#include <iomanip>                              // Provides fixed and setprecision
using namespace std;                            // Allows standard-library names without the std:: prefix

int main() {                                    // Starts the program
    const double BASE_FEE = 5.00;               // Stores the fixed base rental fee
    const double EXTRA_FEE = 1.50;              // Stores the fee for a loan over two hours
    double hoursUsed;                           // Stores the number of hours entered by the user
    double totalFee = BASE_FEE;                 // Starts the total with the base fee

    cout << "Enter the number of hours used: "; // Prompts for the value that controls the decision
    cin >> hoursUsed;                           // Reads the number of hours from standard input

    if (hoursUsed > 2.0) {                      // Checks whether the extra-fee condition is true
        totalFee = totalFee + EXTRA_FEE;        // Adds the extra fee only when the condition is true
    }                                           // Ends the block controlled by the if statement

    cout << fixed << setprecision(2);           // Formats decimal output with exactly two digits
    cout << "Rental fee: $" << totalFee << endl; // Displays the final formatted fee

    return 0;                                   // Ends the program successfully
}             

/*
 * Analysis:
 * 1. [Hoursused = 2 would not get extra fee because the condition is strictly greater than 2.]
 * 2. [If it was >= 2, then it would get the extra fee. Because >= 2 includes 2, and > 2 does not include 2.]
 * 3. [Fixed and setprecision are used to choose how many decimal numbers you want in the output.]
 */