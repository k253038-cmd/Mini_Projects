#include<iostream>
#include<string>
using namespace std;
class employee{
	public:
	string name;
	float salary;
	
};

class manager: public employee{
	public:
	string dept;
	void displaymanager(){
		cout<< "display all detail of manager" <<endl;
		cout<<"name:"<<name<<endl;
		cout<<"salary:"<<salary<<endl;
		cout<<"dept:"<<dept<<endl;
	}
	
};
int main(){
	manager m1;
	m1.name="sadhna";
	m1.salary=1200;
	m1.dept="cs",
	m1.displaymanager();
	
}
