#include <iostream>
using namespace std;

int main()
{
	int integer_num;
	cout << "Enter a number: ";
	cin >> integer_num;

	if (integer_num > 0)
		cout << "This integer number is Positive." << endl;
	else if (integer_num < 0)
		cout << "This integer number is Negative." << endl;
	else
		cout << "Zero" << endl;
	return 0;
}