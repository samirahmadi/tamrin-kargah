#include<iostream>
#include<string>

using namespace std;
int main()
{
	string name, fname;
	int d1, d2, d3, average;
	cin >> name >> fname >> d1 >> d2 >> d3;
	average = (d1 + d2 + d3) / 3;
	cout << average << endl;
	if (average >= 17)
	{
		cout << name << fname << ":";

		cout << "great" << endl;
	}
	else if (12 <= average && average < 17)
	{
		cout << name << fname << ":";

		cout << "normal" << endl;

	}
	else if (average < 12)
	{
		cout << name << fname << ":";

		cout << "fail" << endl;
	}
	system("pause");

}