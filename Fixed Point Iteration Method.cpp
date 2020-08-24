#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
#define PI 22/7 //defining value of greek letter "Pie = 22/7"
using namespace std;

float polynomial_expression(float p)
{
	return (p*p*p + (4 * (p*p)) - 10);
}

int main()
{
	float m = NULL, n = NULL, ans = NULL;
	int i = NULL;
	for (i = 0; i < 100; i++)
	{
		if (polynomial_expression(i) < 0 && polynomial_expression(i + 1) > 0)
		{
			cout << "Root exist's between " << i << " and  " << i + 1 << endl;
			cout << "As  f(" << i << ")" << " is  " << polynomial_expression(i) << " > 0" << endl;
			cout << "And f(" << i + 1 << ")" << "  is " << polynomial_expression(i + 1) << " < 0" << endl;
			m = i;
			n = i + 1;
			break;
		}
		if (polynomial_expression(i) > 0 && polynomial_expression(i + 1) < 0)
		{
			cout << "The root is : = [ " << i << " ,  " << i + 1 << " ] " << endl;
			cout << "As  f(" << i << ")" << " =  " << polynomial_expression(i) << " < 0" << endl;
			cout << "And f(" << i + 1 << ")" << " = " << polynomial_expression(i + 1) << " > 0" << endl;
			m = i;
			n = i + 1;
			break;
		}
	}
	i = 1;
	ans = m + n / 2;

	while (i < 100)
	{

		if (i != 1)
			cout << "For next approximation " << endl << i << "Itration is  " << ans << endl;
		cout << "f(" << ans << ")" << " = " << polynomial_expression(ans) << endl;
		ans = sqrt(2 * ans + 3);

		if (polynomial_expression(ans) > 0)
		{
			n = ans;
		}
		else if (polynomial_expression(ans) < 0)
			m = ans;
		else
			break;
		i = i + 1;
	}
	cout << "Final Approximation is: " << ans << endl;
	system("pause");
}