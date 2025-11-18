#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"enter the values of a,b,c";
	cin>>a>>b>>c;
	cout<<"is a equal to b?"<<(a==b);
	cout<<" is b equal to c?"<<(b==c);
	cout<<" is a greater than b?"<<(a>b);
	cout<<" is sum of a and b less than or equal c?"<<(a+b<=c);
	cout<<" is sum of b and c equal to sum of b and a?"<<(b+c==b+a);
	cout<<" is sum of b and c NOT equal to sum of b and a?"<<(b+c!=b+a);
	return 0;
}
