#include <iostream>
using namespace std;

int main() {
    int choice, qty;
    double price, total = 0;
    char again = 'y';

    cout << "=================================================================================\n";
    cout << "                            Depresso Espresso \n";
    cout << "=================================================================================\n";

    while (again == 'y' || again == 'Y') {
        cout << "\n---------------------------------Menu-------------------------------------\n";
        cout << "==ESPRESSO-BASED DRINKS==            ==FRAPPES & BLENDED DRINKS== \n";
        cout << "1. Espresso - Php 90                 11.Mocha Frappe - Php 160     \n";
        cout << "2. Americano - Php 120               12.Caramel Frappe - Php 160      \n";
        cout << "3. Cappuccino - Php 120              13.Java Chip Frappe - Php 170       \n";
        cout << "4. Mocha latte - Php 140             14.Cookies & Cream Frappe - Php 160   \n";
        cout << "5. Caramel Macchiato - Php 140\n\n";
        cout << "==NON-COFFEE DRINKS==                ==PASTRIES & SNACKS==             \n";
	    cout << "6. Hot Chocolate - Php 100           15.Lotus Croissant- Php 150    \n";
	    cout << "7. Hot Chocolate - Php 100           16.Corn cheese Pastry - Php 145     \n";
	    cout << "8. Iced Chocolate - Php 120          17.Mango Pastry - 130  \n";
	    cout << "9. Matcha Latte - Php 150            18.Cheezy Beefy Fries - Php 120     \n";
	    cout << "10.Milk Tea (Classic) - Php 100      19.Pizza Baguette - Php 150    \n\n";
	    
	    
	    
	    
	    cout << "Enter your choice (1-19): ";
    
        cin >> choice;

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
			
			
			default:
                cout << "Invalid choice.\n";
                continue;
        }

        cout << "Enter quantity: ";
        cin >> qty;

        total += price * qty;

        cout << "Add another item? (y/n): ";
        cin >> again;
    }

    cout << "\n=============================\n";
    cout << "Total Amount: Php " << total << endl;
    cout << "Thank you for your order!\n";

    return 0;
}
