#include<iostream>
#include<string>
using namespace std;
class student{
	public:
	string name;
	float cgpa;
	student(string name, float cgpa){
		this->name=name;
		this->cgpa=cgpa;
	}
	void getinfo(){
    	cout<<"name:" << name<< endl;
		cout <<"cgpa:"<< cgpa<<endl;
	}
};
	int main(){
		student s1("sara", 3.5);
		 s1.getinfo();
		 return 0;
	}
