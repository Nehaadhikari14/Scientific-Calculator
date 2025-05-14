#include <iostream>
#include <cmath> 
using namespace std;
void displayMenu() {
    cout << "====== Scientific Calculator ======\n";
    cout << "Select an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square root\n";
    cout << "7. Logarithm (base 10)\n";
    cout << "8. Natural Logarithm (ln)\n";
    cout << "9. Sine (sin)\n";
    cout << "10. Cosine (cos)\n";
    cout << "11. Tangent (tan)\n";
    cout << "12. Exit\n";
}
int main() {
    int choice;
    double num1, num2;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: 
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2: 
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3: 
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4: 
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is undefined.\n";
                break;
            case 5: 
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 6: 
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Result: " << sqrt(num1) << endl;
                else
                    cout << "Error: Square root of a negative number is not real.\n";
                break;
            case 7: 
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0)
                    cout << "Result: " << log10(num1) << endl;
                else
                    cout << "Error: Logarithm of non-positive number is undefined.\n";
                break;
            case 8: 
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0)
                    cout << "Result: " << log(num1) << endl;
                else
                    cout << "Error: Natural logarithm of non-positive number is undefined.\n";
                break;
            case 9: 
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << sin(num1) << endl;
                break;
            case 10: 
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << cos(num1) << endl;
                break;
            case 11: 
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << tan(num1) << endl;
                break;
            case 12: 
                cout << "Exiting the calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        cout << "------------------------------------\n";
    } while (choice != 12);
    return 0;
}