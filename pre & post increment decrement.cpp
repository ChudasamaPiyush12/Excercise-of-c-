#include <iostream>
using namespace std;

int main() {
    
    int amount= 0;
    
    cout << "The amount is: " << amount << endl;
    cout << "After post increment by 1 the amount is: " 
    << amount++ << endl;
    
    cout<<"now amount is "<<amount<<endl;
    
    cout << "After pre increment by 1 the amount is: " 
    << ++amount<< endl;
    
    cout << "After increasing by 1 the amount is: " 
    << amount << endl;
    
    cout << "After post decrement by 1 the amount is: " 
    << amount-- << endl;
    
    cout<<"now amount is "<<amount<<endl;
    
    cout << "After pre decrement by 1 the amount is: " 
    << --amount << endl;
    
    cout << "After decreasing by 1 the amount is: "
     << amount << endl;
     
    return 0;
}