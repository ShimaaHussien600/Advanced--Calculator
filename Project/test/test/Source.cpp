#include<iostream>
#include<cmath>
#include<string>
#define Pi 3.141592654;
using namespace std;
int main()
{ 
	double number1,x,y;
	int number, a[20],w, cnt = 0;
	cin >> number1;
	number = number1;
	if (number != number1){
		x = number1 - number;
		y = x;
		do{
			y *= 2;
			w = y;
			a[cnt] = w;
			cnt++;
			y = y - a[cnt];
		} while (x != y);
		for (int i = cnt - 1; i >= 0; i--)
			cout << a[i];
	}

	while (number > 0)
	{
		int mod = number % 2;
		number /= 2;
		a[cnt] = mod;
		cnt++;
	}

	cout << "\nYor result = ";
	for (int i = cnt - 1; i >= 0; i--)
		cout << a[i];
	cout << endl;
	system("pause");
	return 0;
}