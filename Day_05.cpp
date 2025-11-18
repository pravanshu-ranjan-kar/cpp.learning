#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the value of a: ";
    cin >> a;
    cout << " using assignment operator plus " << (a += 5);
    cout << " using assignment operator minus " << (a -= 6);
    cout << " using assignment operator division" << (a /= 10);
    cout << " using assignment operator multiplication " << (a *= 6);
    cout << " using assignment operator modulus " << (a %= 100);

    return 0;
}
