#include<stdio.h>
#include<stdlib.h>



struct list{
	int*data;
	int size;
};

void addtolist(struct list*mylist,int item);

int main(){
	struct list mylist;
	int amount;
	
	
	mylist numitems=0;
	mylist size=10;
	
	mylist.data=malloc(mylist.size*sizeof(int));
	
	if(mylist.data==null){
		printf("memory allocation failed");
		retuen 1;
	}







if(mylist->numitems==mylist->size){
	mylist->size+=10;
	mylist->data=realloc(mylist->data,mylist->size*sizeof(int));



mylist->data[mylist->numitems]=item;
mylist->numitems++;
}
