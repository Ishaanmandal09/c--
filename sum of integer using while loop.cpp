#include<iostream>
using namespace std;
int main(){
int sum=0,num=0,Ld;
cout<<"enter the number of :";
cin>>num;
while(num!=0){
	Ld=num%10;
	sum+=Ld;
	num=num/10;
}
cout<<"sum of all digits are:\t"<<sum;
return 0;
}
