#include <iostream>
#include "menu.h"
#include "student.h"
#include "loan.h"

using namespace std;

void showMainMenu() {
    int choice;
    do {
        cout << "\n=== Cahulogan Loan Management System ===\n";
        cout << "1. Manage Students\n";
        cout << "2. Manage Loans\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: manageStudents(); break;
            case 2: manageLoans(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);
}
