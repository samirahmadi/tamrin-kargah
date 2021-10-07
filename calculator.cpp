#include<iostream>
#include<string>

using namespace std;
int main()
{
	float a, b,fact;
	string op;
	cin >> a >> b;
	cout << "enter op:"<<endl;
	cin >> op;
	if (op == "+")
	{
		cout << a+b << endl;

	}
	else if (op == "-")
	{
		cout << a - b << endl;

	}
	else if (op == "*")
	{
		cout << a * b << endl;

	}
	else if (op == "/")
	{
		if (b != 0)
		{
			cout << a / b << endl;
		}
		else
			cout << "zerpo divition";
	}
	else if (op == "cos")
	{
		a = a * 3.14159 / 180;
		cout << cos(a) << endl;

	}
	else if (op == "sin")
	{
		a = a * 3.14159 / 180;
		cout << sin(a) << endl;
	}
	else if (op == "tan")
	{
		a = a * 3.14159 / 180;
		cout << tan(a) << endl;

	}
	else if (op == "cot")
	{
		a = a * 3.14159 / 180;
		cout << 1/tan(a) << endl;

	}
	else if (op == "fact")
	{
		fact = 1;
		for (int i = a; i > 0; i--)
			fact *= i;
		cout << fact << endl;

	}
	system("pause");


}