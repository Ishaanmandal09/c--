#include <iostream>
#include <string>
using namespace std;
int main() {
    string st;
    st = "hi every one";

    cout << "The length of the string is:["<< st.length()<< "]" << endl;

    for (int i = 0; i < st.length(); i++) {
        cout << st.at(i);
    }

    return 0;
}

