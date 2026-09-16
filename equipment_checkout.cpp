/*
 * Course: COEN 2210 - Introduction to Programming
 * Name: [Francisco H. Martinez Cruz]
 * Lab: 5 - Selection Structures
 * Description: [It validates the loan duration and accepts only valid inputs.]
 * Due Date: [9/16/2026]
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int loanHours;
    int equipmentChoice = 0;
    double hourlyRate = 0.0;
    double total = 0.0;
    bool isValidEquipmentChoice = true;

    cout << "Enter loan duration in hours: ";
    cin >> loanHours;

    if (loanHours >= 1 && loanHours <= 4) {
        cout << "Loan duration accepted." << endl;

        cout << "\nEquipment Menu\n";
        cout << "1. Laptop ($15.50/hr)\n";
        cout << "2. Camera ($12.75/hr)\n";
        cout << "3. Projector ($9.25/hr)\n";
        cout << "Select equipment option: ";
        cin >> equipmentChoice;

        switch (equipmentChoice) {
            case 1:
                hourlyRate = 15.50;
                break;

            case 2:
                hourlyRate = 12.75;
                break;

            case 3:
                hourlyRate = 9.25;
                break;

            default:
                cout << "Invalid equipment choice." << endl;
                isValidEquipmentChoice = false;
                break;
        }

        if (isValidEquipmentChoice) {
            total = loanHours * hourlyRate;

            cout << fixed << setprecision(2);
            cout << "Total rental cost: $" << total << endl;
        }

    } else {
        cout << "Invalid loan duration." << endl;
    }

    return 0;
}