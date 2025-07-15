#include <iostream>
#include "Calculator.h"

using namespace std;

namespace Calculator {
    // Function implementations
    int addition(int value_1, int value_2) {
        int result = value_1 + value_2;
        cout << result << endl;
        return result;
    }
    
    int substraction(int value_1, int value_2) {
        int result = value_1 - value_2;
        cout << result << endl;
        return result;
    }
    
    int multiplication(int value_1, int value_2) {
        int result = value_1 * value_2;
        cout << result << endl;
        return result;
    }
    
    int division(int value_1, int value_2) {
        if (value_2 == 0) {
            cout << "Invalid value error!!" << endl;
            return 0;
        }
        int result = value_1 / value_2;
        cout << result << endl;
        return result;
    }
}