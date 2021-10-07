#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c&&a + c > b&&b + c > a)
		cout << "possible triangle" << endl;
	else
		cout << "impossible triangle" << endl;

	system("pause");

}