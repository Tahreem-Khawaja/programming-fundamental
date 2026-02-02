#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;

// Global arrays
string students[MAX];
float bill[MAX] = {0};
int studentTotal = 0;

// Meal prices
float breakfast = 120;
float lunch = 200;
float dinner = 250;

int main() {
    int choice;
    int roll;

    cout << "=====================================\n";
    cout << "   HOSTEL MEAL MESS MANAGEMENT SYSTEM\n";
    cout << "=====================================\n";

    do {
        cout << "\n--------- MAIN MENU ---------\n";
        cout << "1. Register Student\n";
        cout << "2. Show Mess Menu\n";
        cout << "3. Order Breakfast\n";
        cout << "4. Order Lunch\n";
        cout << "5. Order Dinner\n";
        cout << "6. Show Bill of a Student\n";
        cout << "7. Cancel All Meals of a Student\n";
        cout << "8. Show All Students\n";
        cout << "9. Show Total Mess Collection\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Using Switch Statement for better organization
        switch (choice) {
            case 1:
                if(studentTotal >= MAX) {
                    cout << "Student limit reached!\n";
                } else {
                    cout << "Enter Student Name: ";
                    cin.ignore();
                    getline(cin, students[studentTotal]);
                    cout << "Student Registered Successfully! ID = " << studentTotal << endl;
                    studentTotal++;
                }
                break;

            case 2:
                cout << "\n--- Mess Menu ---\n";
                cout << "1. Breakfast - Rs." << breakfast << endl;
                cout << "2. Lunch     - Rs." << lunch << endl;
                cout << "3. Dinner    - Rs." << dinner << endl;
                break;

            case 3:
                cout << "Enter Student ID: ";
                cin >> roll;
                if(roll >= 0 && roll < studentTotal) {
                    bill[roll] += breakfast;
                    cout << "Breakfast Ordered!\n";
                } else {
                    cout << "Invalid Student ID!\n";
                }
                break;

            case 4:
                cout << "Enter Student ID: ";
                cin >> roll;
                if(roll >= 0 && roll < studentTotal) {
                    bill[roll] += lunch;
                    cout << "Lunch Ordered!\n";
                } else {
                    cout << "Invalid Student ID!\n";
                }
                break;

            case 5:
                cout << "Enter Student ID: ";
                cin >> roll;
                if(roll >= 0 && roll < studentTotal) {
                    bill[roll] += dinner;
                    cout << "Dinner Ordered!\n";
                } else {
                    cout << "Invalid Student ID!\n";
                }
                break;

            case 6:
                cout << "Enter Student ID: ";
                cin >> roll;
                if(roll >= 0 && roll < studentTotal) {
                    cout << "\nStudent Name: " << students[roll] << endl;
                    cout << "Total Bill: Rs." << bill[roll] << endl;
                } else {
                    cout << "Invalid Student ID!\n";
                }
                break;

            case 7:
                cout << "Enter Student ID: ";
                cin >> roll;
                if(roll >= 0 && roll < studentTotal) {
                    bill[roll] = 0;
                    cout << "Meals Cancelled Successfully!\n";
                } else {
                    cout << "Invalid Student ID!\n";
                }
                break;

            case 8:
                if(studentTotal == 0) {
                    cout << "No students registered.\n";
                } else {
                    cout << "\n--- Registered Students ---\n";
                    for(int i = 0; i < studentTotal; i++) {
                        cout << i << ". " << students[i]
                             << " | Bill: Rs." << bill[i] << endl;
                    }
                }
                break;

            case 9: {
                float total = 0;
                for(int i = 0; i < studentTotal; i++) {
                    total += bill[i];
                }
                cout << "\nTotal Mess Collection = Rs." << total << endl;
                break;
            }

            case 10:
                cout << "\nThank You for Using the System!\n";
                break;

            default:
                cout << "Invalid Choice! Try Again.\n";
                break;
        }

    } while(choice != 10);

    return 0;
}
