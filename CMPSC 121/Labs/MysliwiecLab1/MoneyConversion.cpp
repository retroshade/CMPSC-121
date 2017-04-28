/*Ryan Mysliwiec Sec. 1
This program will convert Yen and Euros to Dollar amounts
	Input: Yen and Euros
	Output: Dollars
	Processing: AmountYen/98.93=Dollars
				AmountEuros/.74=Dollars
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double yentodollar = 98.93;
const double eurotodollar = .74;

int main()
{
	double amountyen;
	double amounteuro;
	double dollaryen;
	double dollareuro;

	cout << "Please enter the amount of Yen. " << endl;
	cin >> amountyen;

	dollaryen = amountyen / yentodollar;

	cout << "You have " << dollaryen << setprecision(2) << fixed << " dollars from " << amountyen << " Yen. " << endl;

	cout << "Please enter the amount of Euros. " << endl;
	cin >> amounteuro;

	dollareuro = amounteuro / eurotodollar;

	cout << "You have " << dollareuro << setprecision(2) << fixed << " dollars from " << amounteuro << " Yen. ";

}