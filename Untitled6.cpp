#include<stdio.h>
int main(){
	int array[3]={1,2,3};
	int n=3;
	int *ptr=array;
	
	 printf("Element\tAddress\n");
    for(int i = 0; i <n ; i++) {
        printf("%d\t%p\n", *(ptr + i), (ptr + i));
    }
}
