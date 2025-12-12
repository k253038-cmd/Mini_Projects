#include<stdio.h>
int main(){
	int array[5]={1,2,3,2,4};
	int n=5;
	int *ptr=array;

			printf(" the address of array[5]: %d and value %d\n", (ptr+2), *(ptr+2));
	
}
