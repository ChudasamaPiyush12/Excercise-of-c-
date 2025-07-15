#include <iostream>
#include "Calculator.h"

using namespace std;

void displayMenu() {
    cout << "Tutorial for use the calculator:-" << endl <<
            "Step-1: Enter first value" << endl <<
            "Step-2: Enter second value" << endl <<
            "Step-3: Enter Operator" << endl;
    cout << "Simple Calculator Menu:" << endl;
    cout << "1. For Addition press 1" << endl;
    cout << "2. For Subtraction press 2" << endl;
    cout << "3. For Multiplication press 3" << endl;
    cout << "4. For Division press 4" << endl;
    cout << "Enter your choice: " << endl;
}

int main() {
    displayMenu();
    
    int first_value, second_value, op;
    
    cout << "Enter the first value: ";
    cin >> first_value;
    
    cout << "Enter the second value: ";
    cin >> second_value;
    
    cout << "Enter an Operator: ";
    cin >> op;
    
   switch(op) {
        case 1:
            cout << "Addition: " << first_value + second_value << endl;
            break;
        case 2:
            cout << "Subtraction: " << first_value - second_value << endl;
            break;
        case 3:
            cout << "Multiplication: " << first_value * second_value << endl;
            break;
        case 4:
            if(second_value != 0)
                cout << "Division: " << (float)first_value / second_value << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
