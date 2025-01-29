/*
    Author: DOREEN IRUNGU
    Reg no: BSE-05-0153/2024
    Date: 29/01/2025 
    version 1:
    */

#include <iostream> cout , cin 
using namespace std;

// Function to calculate overdue fine
int calculateFine(int overdueDays) {
    int fine = 0;
    if (overdueDays > 14) {
        fine += (overdueDays - 14) * 100;  // Days beyond 14 charged at Ksh. 100
        overdueDays = 14;
    }
    if (overdueDays > 7) {
        fine += (overdueDays - 7) * 50;  // Days 8-14 charged at Ksh. 50
        overdueDays = 7;
    }
    if (overdueDays > 0) {
        fine += overdueDays * 20;  // First 7 days charged at Ksh. 20
    }
    return fine;
}

int main() {
    // Calculating Library Fines
    cout << "\n(1): Calculation for the Library Fines" << endl;
    string bookID;
    int dueDate, returnDate;

    // User input
    cout << "Enter the Book ID: ";
    cin >> bookID;
    cout << "Enter the Due Date for the book (as day number i.e., 10 for 10th day): ";
    cin >> dueDate;
    cout << "Enter the Return Date for the book (as day number i.e., 15 for 15th day): ";
    cin >> returnDate;

    // Calculate overdue days
    int overdueDays = returnDate - dueDate;

    // Display results
    if (overdueDays <= 0) {
        cout << "No fine charged." << endl;
    } else {
        int fine = calculateFine(overdueDays);
        cout << "\nBook ID: " << bookID << endl;
        cout << "Due Date: Day " << dueDate << endl;
        cout << "Return Date: Day " << returnDate << endl;
        cout << "Days Overdue: " << overdueDays << endl;
        cout << "Total Fine: Ksh. " << fine << endl;
    }

    return 0;
}
