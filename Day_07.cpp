#include <iostream>
using namespace std;
int main()
{
    int a=5,b=20;
    cout<<"using bitwise operator and '&' :"<<(a&b)<<endl;
    cout<<"using bitwise operator or '|' :"<<(a|b)<<endl;
    cout<<"using bitwise operator xor '^' :"<<(a^b)<<endl;
    cout<<"using bitwise operator not '~' :"<<(a=~b)<<endl;
    cout<<"using bitwise operator left shift '<<' :"<<(a<<b)<<endl;
    cout<<"using bitwise operator right shit '>>' :"<<(a>>b)<<endl;
    return 0;
}
