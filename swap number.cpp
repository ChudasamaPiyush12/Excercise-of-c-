#include <iostream>

using namespace std;

int main()
{
	string character_1, character_2, ex_var;
	
	cout<<"Enter first character name:";
	cin>>character_1;
	
	cout<<"Enter second  character name:";
	cin>>character_2;
	 cout<<endl;
	 
	cout << "Before swap: first character " << character_1
		 << ", second character " << character_2 << endl;
		 
	ex_var = character_1;
	character_1= character_2;
	character_2 = ex_var;
	
	cout << "After swap: first character " << character_1
		 << ", second character " << character_2 << endl;
		 
	return 0;
	
}