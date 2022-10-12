#include <iostream>
#include <cmath>
using namespace std;
int main() {

	double x, y, z, s,a,b,c;
	cout << "Enter x" << endl;
	cin>>x;
	cout << "Enter y" << endl;
	cin >> y;
	cout << "Enter z" << endl;
	cin >> z; 

	a = pow(2, -x);
	b = pow((x + pow(abs(y),0.25)),0.5);
	c = pow(exp(x-1/sin(z)),(1.0/3));
	s = a*b*c;

	cout<<endl << "x= " << x << "\ny= " << y << "\nz= " << z << "\ns= " << s << endl;

	return 0;
}