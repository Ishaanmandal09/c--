#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int x, y;
    cout << "Enter the numbers x y:\n";
    cin >> x >> y;

    swap(x, y);

    cout << "Swapped values:\n";
    cout << "x = " << x << " y = " << y;
    return 0;
}

