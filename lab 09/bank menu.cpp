#include<iostream>
using namespace std;
int main (){
	double balance= 1000.0;
	int choice;
	double amount;
	 do {
        // Display menu
        cout << "\n===== Simple Banking System =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: // Deposit Money
                cout << "Enter amount to deposit: $";
                cin >>amount;
                if(amount > 0) {
                    balance += amount;
                    cout << "Deposited $" << amount << " successfully.\n";
                } else {
                    cout << "Invalid amount! Please enter a positive value.\n";
                }
                break;

            case 2: // Withdraw Money
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if(amount > balance) {
                    cout << "Insufficient balance! You have $" << balance << " in your account.\n";
                } else if(amount <= 0) {
                    cout << "Invalid amount! Please enter a positive value.\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawn $" << amount << " successfully.\n";
                }
                break;

            case 3: // Check Balance
                cout << "Your current balance is: $" << balance << "\n";
                break;

            case 4: // Exit
                cout << "Thank you for using our banking system. Goodbye!\n";
                break;

            default: // Invalid choice
                cout << "Invalid choice! Please select a valid option (1-4).\n";
        }
    } while(choice != 4); // Repeat until user chooses to exit

    return 0;
}

