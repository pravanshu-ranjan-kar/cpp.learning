#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter the value of a :";
    cin>>a;

    cout << "Original a = " << a<<endl;

    cout << "Post-increment a++ = " << a++ << endl;
    cout << "After post-increment, a = " << a << endl;
    cout << "Pre-increment ++a = " << ++a << endl;

    cout << "Post-decrement a-- = " << a-- << endl;
    cout << "After post-decrement a = " << a << endl;
    cout << "Pre-decrement --a = " << --a << endl;

    return 0;
}
