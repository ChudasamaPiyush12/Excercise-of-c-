#include<iostream>
#include<ctime>

using namespace std;

 int main(){
 	time_t shivraj;
 	time(&shivraj);
 	
 	cout<<ctime(&shivraj);
 	return 0;
 }
