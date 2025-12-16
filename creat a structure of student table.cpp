#include<iostream>
using namespace std;
struct student{
	int roll;
	string name;
	char section;
};
int main(){
	student S;
	cout<<"Enter the roll number\n";
	cin>>S.name;
	cout<<"enter the name\n";
	cin>>S.roll;
	cout<<"enter the section";
	cin>>S.section;
	cout<<"the student detail are |name["<<S.name<<"]|roll["<<S.roll<<"]|section["<<S.section<<"]";
	return 0;
}
