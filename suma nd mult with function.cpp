#include<iostream>
using namespace std;
int add(int a, int b){
	return a+b;
}
int mult(int a, int b){
	return a*b;
}
int main(){
	int x,y;
cout<<"enter the two numbers:\n";
cin>>x>>y;
cout<<"the sum and product of two number is:\t"<<add(x,y)<<"|"<<mult(x,y);
return 0;
}
