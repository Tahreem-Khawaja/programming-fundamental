#include <iostream>
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "\n------ Restaurant Menu ------" << endl;
    cout << "1. Burger      - $5.00" << endl;
    cout << "2. Pizza       - $8.00" << endl;
    cout << "3. Pasta       - $6.50" << endl;
    cout << "4. Sandwich    - $4.50" << endl;
    cout << "5. Coffee      - $3.00" << endl;
    cout << "6. Exit" << endl;
}

// Function to calculate cost of selected item
double calculateItemCost(double price, int quantity) {
    return price * quantity;
}

// Function to calculate final bill with tax/service charge
double calculateFinalBill(double total) {
    double tax = total * 0.10; // 10% service charge
    return total + tax;
}

int main() {
    int choice, quantity;
    double totalBill = 0.0;
    double price = 0.0;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter quantity: ";
            cin >> quantity;

            switch (choice) {
                case 1: price = 5.00; break;
                case 2: price = 8.00; break;
                case 3: price = 6.50; break;
                case 4: price = 4.50; break;
                case 5: price = 3.00; break;
            }

            double itemCost = calculateItemCost(price, quantity);
            totalBill += itemCost;

            cout << "Item added! Cost: $" << itemCost << endl;
        }
        else if (choice == 6) {
            break;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 6);

    double finalBill = calculateFinalBill(totalBill);

    cout << "\n------ Bill Summary ------" << endl;
    cout << "Total (Before Tax): $" << totalBill << endl;
    cout << "Service Charge (10%): $" << totalBill * 0.10 << endl;
    cout << "Final Amount: $" << finalBill << endl;
    cout << "Thank you for dining with us!" << endl;

    return 0;
}
