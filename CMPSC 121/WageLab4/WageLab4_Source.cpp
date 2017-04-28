/*
Ryan Mysliwiec
CMPSC 121
Sec 001

Input - Number of days worked
Processing - use the number of days worked to calculate wage per day given 
	(twice the amount of the previous day), then add the wages together for
	a total wage
	Days		Daily Wage
	1           0.01
	2           0.02
	3           0.04
	4           0.08
	5           0.16
	6			0.32
	Total wage = $0.31
Output - number of days worked, daily wages, total wage
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int workdays;
	int counter;
	double dailywage = .01;
	double totalwage = 0.0;

	cout << "Please enter the amount of days the employee worked. ";
	cin >> workdays;

	while (workdays < 1)
	{
		cout << "Please enter an amount greater than 0. ";
		cin >> workdays;
	}

	cout << "Days\t" << "Daily Pay" << endl;

	for (counter = 1; counter <= workdays; counter++)
	{
		cout << counter<< " \t " << dailywage <<endl;
		totalwage = totalwage + dailywage;
		dailywage = dailywage * 2;
	}
	cout << setprecision(2) << fixed << "The employee earned $" << totalwage << ".\n";
}