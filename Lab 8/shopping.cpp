#include <iostream>
using namespace std;

int main() {
    int category, item, quantity;
    double price = 0, total, discount = 0, finalAmount;

    cout << "Welcome to Shopping System\n";
    cout << "Select Category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cin >> category;

    switch (category) {

    case 1: // Electronics
        cout << "\nElectronics Items:\n";
        cout << "1. Laptop ($1000)\n";
        cout << "2. Smartphone ($700)\n";
        cout << "3. Headphones ($150)\n";
        cin >> item;

        switch (item) {
            case 1: price = 1000; break;
            case 2: price = 700; break;
            case 3: price = 150; break;
            default: cout << "Invalid item!"; return 0;
        }
        break;

    case 2: // Clothing
        cout << "\nClothing Items:\n";
        cout << "1. Jacket ($120)\n";
        cout << "2. T-shirt ($40)\n";
        cout << "3. Jeans ($60)\n";
        cin >> item;

        switch (item) {
            case 1: price = 120; break;
            case 2: price = 40; break;
            case 3: price = 60; break;
            default: cout << "Invalid item!"; return 0;
        }
        break;

    case 3: // Groceries
        cout << "\nGrocery Items:\n";
        cout << "1. Milk ($2 per Liter)\n";
        cout << "2. Bread ($3 per Loaf)\n";
        cout << "3. Eggs ($5 per Dozen)\n";
        cin >> item;

        switch (item) {
            case 1: price = 2; break;
            case 2: price = 3; break;
            case 3: price = 5; break;
            default: cout << "Invalid item!"; return 0;
        }
        break;

    default:
        cout << "Invalid category!";
        return 0;
    }

    cout << "\nEnter Quantity: ";
    cin >> quantity;

    total = price * quantity;

    // Discount calculation
    if (total >= 100 && total <= 500) {
        discount = total * 0.10;
    } else if (total > 500) {
        discount = total * 0.20;
    }

    finalAmount = total - discount;

    // Invoice
    cout << "\n INVOICE \n";
    cout << "Price per item: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Price: $" << total << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Final Amount: $" << finalAmount << endl;

    cout << "Thank you for shopping!\n";

    return 0;
}
