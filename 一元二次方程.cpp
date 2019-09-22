#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	float a,b,c;
	float i, j, k;
	cout << "a=";
	cin >> a;
	cout << endl << "b=";
	cin >> b;
	cout << endl << "c=";
	cin >> c;
	cout << a << "x^2+" << b << "x+" << c << "=0" << endl;
	i = b * b -( 4 * a*c);
	if (i < 0)
		cout << "无解"<<endl;
	else if (i == 0)
	{
		j = -b / 2 * a;
		cout << "解为" << j << endl;
	}
	else if (i > 0)
	{
		j = (-b + sqrt(i)) / 2 * a;
		k =( -b - sqrt(i)) / 2*a;
		cout << "x1=" << j << endl << "x2=" << k << endl;
	}
	system("pause");
	return 0;
}