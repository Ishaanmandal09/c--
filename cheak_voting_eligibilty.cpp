#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter the age of  the person:";
    cin >> age;
    if (age >= 18)
    {
        cout << "person can vote";
    }
    else
    {
        cout << "not eligible";
    }
    return 0;
}