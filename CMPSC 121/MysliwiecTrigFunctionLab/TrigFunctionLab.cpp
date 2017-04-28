/*This program is designed to calculate trig functions, chosen by the user, of angles specified by the user
Ryan Mysliwiec
2-3-2015
CMPSC 121, SEC 1

Input:s(sine), c(cosine), t(tangent); angle in degrees
Output: sine, cosine, or tangent of input angle in degrees
Processing: sin(angle), cos(angle), or tan(angle)
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.14159265;

int main()
{
	double angle;
	char function;
	double answer;

	cout << "Please enter the angle in degrees. " << endl;
	cin >> angle;
	
	cout << "Please define which trigonometric function you would like to use. " << endl;
	cout << "Enter s for sine, c for cosine, or t for tangent. ";
	cin >> function;

	if (function != 'c' && function != 's' && function != 't')
	{
		cout << "Please enter a valid funciton. " << endl;
		cin >> function;
	}

	if (function == 's')
	{
		answer = sin((angle*pi)/180);
	}
	else if (function == 'c')
	{
		answer = cos((angle*pi) / 180);
	}
	else if (function == 't')
	{
		answer = tan((angle*pi) / 180);
	}

	cout << "The solution to your equation for angle " << angle << setprecision(2) << fixed << " is " << answer << endl;

	return 0;
}