#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	float a, b, c, s, C;
	cout << "a=";
	cin >> a;
	cout << endl << "b=";
	cin >> b;
	cout << endl << "c=";
	cin >> c;
	cout <<endl<< "a=" << a << "b=" << b << "c=" << c << endl;
	C = (a + b + c) / 2;
	s = sqrt(C*(C - a)*(C - b)*(C - c));
	cout << "Ãæ»ýÎª" << s << endl;
	system("pause");
}
