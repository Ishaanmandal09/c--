#include<iostream>
using namespace std;

int main() {
    int num = 0, i = 1;

    cout << "Enter a number" << endl;
    cin >> num;

    do {
        cout << num << " * " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}

