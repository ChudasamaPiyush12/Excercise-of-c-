#include <iostream>
using namespace std;

int main()
{
	int table_num;
	cout << "Enter a number and get the table of number: ";
	cin >>table_num;

	for (int i = 1; i <= 10; i++)
	{
		cout << table_num << " x " << i << " = " << table_num * i 
		<< endl;
	}
	return 0;
}