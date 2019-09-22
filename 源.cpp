#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int a, b, c,s,i,week,day;
	int m[12]= { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cout << "请输入今天的日期";
	cin >> a;
	cout << "-";
	cin >> b;
	cout << "-";
	cin >> c;
	cout << endl;
	if ((a % 4) == 0)
	{
		if ((a % 100) == 0)
		{
			if ((a % 400) == 0)
			{
				i = 1;
			}
			i = 0;
		}
		i = 1;
	}
	if (i == 1)
	{
		a[1] = 29;
		for (int i = 0; i < b - 1; i++)
		{
			s += m[i];
		}
	}
	if (i == 0)
	{
		for (int i = 0; i < b - 1; i++)
		{
			s += m[i];
		}
	}
	week = s / 7;
	day = s % 7;
	cout << "是这一年的第" << week << "周，第" << day << "天";
	return 0;
}