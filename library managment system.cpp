/*
This C++ program models a library system using OOP by defining Person, 
LibraryMember, and PremiumMember classes to manage names, IDs, books borrowed, 
and membership fees, demonstrating class hierarchies for scalable membership-based applications. ??
Programmer: Doreen. Irungu
Registration Number: BSE-05-0153/2024.
Date: 1st March 2025.
*/
#include <iostream>
#include <string>

using namespace std;

// (I) Base class: Person
// This class represents a general person with a name.
class Person {
protected:
    string name; // Name of the person

public:
    // Setter method to assign a name
    void setName(string n) {
        name = n;
    }

    // Getter method to retrieve the name
    string getName() {
        return name;
    }
};

// (II) Derived class: LibraryMember
// This class inherits from Person and represents a library member.
class LibraryMember : public Person {
private:
    int memberID;       
    int booksBorrowed;  // Number of books borrowed by the member

public:
    // Initialize the library member details
    LibraryMember(string n, int id, int borrowed) : memberID(id), booksBorrowed(borrowed) {
        setName(n); // Set the name using the inherited method
    }

    // Getter method to retrieve the member ID
    int getMemberID() {
        return memberID;
    }

    // Getter method for the number of books borrowed
    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// (III) Derived class: PremiumMember
// This class inherits from LibraryMember and represents a premium library member.
class PremiumMember : public LibraryMember {
private:
    double membershipFee; // Additional fee for premium membership

public:
    // Initialize the premium member details
    PremiumMember(string n, int id, int borrowed, double fee) : LibraryMember(n, id, borrowed), membershipFee(fee) {}

    // Getter method for membership fee
    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    PremiumMember premiumMember("Josiah Germaine", 2025, 2, 240.0);

    // Display member details
    cout << "Member Name: " << premiumMember.getName() << endl;
    cout << "Member ID: " << premiumMember.getMemberID() << endl;
    cout << "Books Borrowed: " << premiumMember.getBooksBorrowed() << endl;
    cout << "Membership Fee: kSH " << premiumMember.getMembershipFee() << endl;

    return 0;
}