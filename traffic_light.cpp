
#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "=== Smart Traffic Light System ===\n";
    cout << "1. Red Light\n";
    cout << "2. Yellow Light\n";
    cout << "3. Green Light\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "RED: Stop!\n";
            break;
        case 2:
            cout << "YELLOW: Get Ready!\n";
            break;
        case 3:
            cout << "GREEN: Go!\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
