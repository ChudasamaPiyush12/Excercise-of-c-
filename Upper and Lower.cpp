#include <iostream>

 using namespace std;
int main(){
	int a ;
	cin>>a;
	if(a>-2147483648){
		cout<<"the no is in upper limit";
	}else if(a<2147483647){
		cout<<"the no is in lowwer limit";
	}else{
		cout<<"invalid no ";
	}
}
