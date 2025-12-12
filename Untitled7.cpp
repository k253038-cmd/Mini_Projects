#include<stdio.h>
int  function( int *ptr, int n){
  int max=*ptr;
	for(int i=0; i<n; i++){
		if(*(ptr+i)>max){
			max=*(ptr+i);
		}
	}
	return max;
	
}
int main(){
	int arr[3]={10,30,50};
	int n=3;
	function(arr, 3);
	int res=function(arr, 3);
	printf("%d\n", res);
	
}
