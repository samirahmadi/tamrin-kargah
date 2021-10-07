#include<iostream>
using namespace std;
int main()
{
	float weight, height, bmi, m;
	cin >> height >> weight;
	m = height / 100;
	bmi = weight / (m * m);
	cout << bmi << endl;
	if (bmi <= 18.5) {

		cout << "underweight" << endl;

	}
	else if (18.5 < bmi && bmi <= 24.9)
	{

		cout << "normal" << endl;

	}
	else if (25.0 < bmi && bmi <= 29.9)
	{

		cout << "upweight" << endl;

	}
	else if (30.0 < bmi && bmi <= 34.9) {

		cout << "owerweight" << endl;
	}
	else
		cout << "fat" << endl;
	system("pause");

}