/*
This program prompts the user to input values into a 3x3 matrix (2D array)
 and then calculates and displays the sum of each row.
Programmer: Doreen Wanjiru Irungu.
Registration Number: BSE-05-0153/2024.
Date: 21st March 2025.
*/

#include <iostream>
using namespace std;

// Macros to define the number of rows and columns in the matrix
#define ROWS 3  
#define COLS 3  

int main() {
    int matrix[ROWS][COLS]; // Declare 2D array

    // Prompt the user to input values for the matrix
    cout << "Enter " << ROWS * COLS << " elements for a " << ROWS << "x" << COLS << " matrix: ";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> matrix[i][j]; // Store values in the matrix
        }
    }
    
    // Display the matrix in a formatted way
    cout << "\nThe entered matrix is:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << "\t"; // Display matrix elements with spacing
        }
        cout << endl; // Move to the next row
    }


    // Calculate and display the sum of each row
    cout << "Row-wise sums:\n";
    for (int i = 0; i < ROWS; i++) {
        int rowSum = 0; // Variable to store the sum of the current row
        for (int j = 0; j < COLS; j++) {
            rowSum += matrix[i][j]; // Add matrix elements in the current row
        }
        cout << "Sum of row " << i + 1 << ": " << rowSum << endl; // Display row sum
    }

    return 0;
}