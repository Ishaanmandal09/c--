#include<iostream>
using namespace std;
class rectagle{
	private:
	         int l,b;
			 public:
			        void getdata(int x,int y){
			        	l=x;b=y;
					}
					int area(){
						return l*b;
					}
					int parameter(){
						return 2*(l*b);
					}
              };
              class square{
              	private:
              		    int side;
              		    public:
              		    	   void getdata (int s){
              		    	   	     side = s;
								 }
								 int area(){
								 	return side*side;
								 }
								 	int parameter(){
						return 2*(side);
					}
			  };
int main(){
	int a,b,S;
	cout<<"enter the length and breath for the rectangle\n";
	cin>>a>>b;
	cout<<"enter the side of the sqare\n";
	cin>>S;
	rectagle R;
	R.getdata(a,b);
	square sq;
	sq.getdata(S);
	cout<<"the area and paramerter of rectangle is["<<R.area()<<"]["<<R.parameter()<<"]";
	cout<<"the area and paramerter of square is["<<sq.area()<<"]["<<sq.parameter()<<"]";
	return 0;
	
}
