#include<iostream>
using namespace std;
int main(){
	int x;
	int *p;
	cout<<"enter the number\n";
	cin>>x;
	p=&x;
	cout<<"address of variable is\t"<<p;
	cout<<"value of vasriable is\t"<<*p;
	return 0;
}
