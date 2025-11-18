#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two values for a and b"<<endl;
    cin>>a>>b;
    int max,min;
    int big=(a>b) ?a:b;
    int small=(a<b) ?a:b;
    cout<<"the larger number is: "<< big<<endl;
   cout<<"the smaller nuber is: "<< small<<endl;
    return 0;
}
