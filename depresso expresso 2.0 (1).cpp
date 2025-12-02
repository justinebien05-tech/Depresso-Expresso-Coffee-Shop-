#include <iostream>
using namespace std;

int main() {
    int choice, qty;
    double price, total = 0;
    char again = 'y';

    int stock[20] = { 0,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10  
    };

    cout << "=================================================================================\n";
    cout << "                            Depresso Espresso \n";
    cout << "=================================================================================\n";

    while (again == 'y' || again == 'Y') {
        cout << "\n---------------------------------Menu-------------------------------------\n";
        cout << "==ESPRESSO-BASED DRINKS==          \n";
        cout << "1. Espresso - Php 90 (Stock: " << stock[1] << ")\n";
        cout << "2. Americano - Php 120 (Stock: " << stock[2] << ")\n";
        cout << "3. Cappuccino - Php 120 (Stock: " << stock[3] << ")\n";
        cout << "4. Mocha latte - Php 140 (Stock: " << stock[4] << ")\n";
        cout << "5. Caramel Macchiato - Php 140 (Stock: " << stock[5] << ")\n\n";

        cout << "==NON-COFFEE DRINKS==   \n";
        cout << "6. Hot Chocolate - Php 100 (Stock: " << stock[6] << ")\n";
        cout << "7. Hot Chocolate - Php 100 (Stock: " << stock[7] << ")\n";
        cout << "8. Iced Chocolate - Php 120 (Stock: " << stock[8] << ")\n";
        cout << "9. Matcha Latte - Php 150 (Stock: " << stock[9] << ")\n\n";
       
        cout << "==FRAPPES & BLENDED DRINKS== \n";
        cout << "10. Milk Tea - Php 100 (Stock: " << stock[10] << ")\n";
        cout << "11. Mocha Frappe - Php 160 (Stock: " << stock[11] << ")\n";
        cout << "12. Caramel Frappe - Php 160 (Stock: " << stock[12] << ")\n";
        cout << "13. Java Chip Frappe - Php 170 (Stock: " << stock[13] << ")\n";
        cout << "14. Cookies & Cream Frappe - Php 160 (Stock: " << stock[14] << ")\n\n";
        
        cout << "==PASTRIES & SNACKS==\n";
        cout << "15. Lotus Croissant - Php 150 (Stock: " << stock[15] << ")\n";
        cout << "16. Corn Cheese Pastry - Php 145 (Stock: " << stock[16] << ")\n";
        cout << "17. Mango Pastry - Php 130 (Stock: " << stock[17] << ")\n";
        cout << "18. Cheezy Beefy Fries - Php 120 (Stock: " << stock[18] << ")\n";
        cout << "19. Pizza Baguette - Php 150 (Stock: " << stock[19] << ")\n\n";

        cout << "Enter your choice (1-19): ";
        cin >> choice;

        if (choice < 1 || choice > 19) {
            cout << "Invalid choice.\n";
            continue;
        }

        if (stock[choice] == 0) {
            cout << "Sorry, this item is OUT OF STOCK.\n";
            continue;
        }

        switch (choice) {
            case 1: price = 90; break;
            case 2: price = 120; break;
            case 3: price = 120; break;
            case 4: price = 140; break;
            case 5: price = 140; break;
            case 6: price = 100; break;
            case 7: price = 100; break;
            case 8: price = 120; break;
            case 9: price = 150; break;
            case 10: price = 100; break;
            case 11: price = 160; break;
            case 12: price = 160; break;
            case 13: price = 170; break;
            case 14: price = 160; break;
            case 15: price = 150; break;
            case 16: price = 145; break;
            case 17: price = 130; break;
            case 18: price = 120; break;
            case 19: price = 150; break;
        }

        cout << "Enter quantity: ";
        cin >> qty;

        if (qty > stock[choice]) {
            cout << "Not enough stock! Available: " << stock[choice] << endl;
            continue;
        }

        stock[choice] -= qty;

        total += price * qty;

        cout << "Add another item? (y/n): ";
        cin >> again;
    }

    cout << "\n=============================\n";
    cout << "Total Amount: Php " << total << endl;
    cout << "Thank you for your order!\n";

    return 0;
}
    