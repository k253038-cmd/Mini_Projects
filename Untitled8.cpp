#include<stdio.h>
void incrementedarr(int *ptr, int n){
	for(int i=0; i<n; i++){
		*(ptr+i)=*(ptr+i)+1;
	}
}
int main(){
	int array[4]={11,12,13,14};
	int n=4;
	printf("display orginal araay:\n");
	for(int i=0; i<4; i++){
		printf(" %d ", array[i]);
	}
   
	incrementedarr(array, 4);
	 printf("\n");
	printf("display incremented arry");
		for(int i=0; i<4; i++){
		printf(" %d ", array[i]);
	}
}
