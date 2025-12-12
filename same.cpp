#include<stdio.h>
#include<string.h>
 struct student {
 	char name[20];
 	int id;
 	float marks;
 };
 void input(struct student s[], int no){
 	for(int i=0; i<no; i++){
	 	printf("enter a name of student:\n");
 	fgets(s[i].name, sizeof(s[i].name), stdin);
 	s[i].name[strcspn(s[i].name, "\n")] = '\0';  
 
 	printf("enter a id of student\n");
 	scanf(" %d ", &s[i].id);
 	getchar();
 	printf("enter a marks of student\n");
 	scanf(" %.2f ", &s[i].marks);
 	getchar();
 }
}
void display(struct student s[], int no){
	for(int i=0; i<no; i++){
			printf(" name of student is:%s",s[i].name);
			printf("id of student is %d:",s[i].id);
			printf("marks of student is %.2f:",s[i].marks);
		
	}
}
 
int main(){
	int no;
	printf("enter a number");
	scanf("%d", &no);
	getchar();
	struct student s[no];
	input(s,no);
	display(s,no);
	
	
}
