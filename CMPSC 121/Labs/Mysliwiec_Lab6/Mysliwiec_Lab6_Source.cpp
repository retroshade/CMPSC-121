/*Ryan Mysliwiec
CMPSC 121
Sec 001
This program is designed to output a Fibonacci sequence using the first two numbers decided by the user to the position decided by the user.
Input: 1st and 2nd numbers of sequence, position
Processing: Use functions to calculate the sequence up to the position specified by the user
Output: The Fibonacci sequence from the first 2 numbers up to the point specified by the user.
*/

#include <iostream>
using namespace std;

int fibcalc(int vala, int valb, int pos);

int main()
{
	int val1;//, vala;
	int val2;// , valb;
	int valnew;
	int position;

	cout << "Please enter the first number of the Fibonacci Sequence. ";
	cin >> val1;

	while (val1 <= 0)
	{
		cout << "Please enter a number greater than zero. ";
		cin >> val1;
	}

	cout << "Please enter the second number of the Fibonacci Sequence. ";
	cin >> val2;

	while (val2 < 0)
	{
		cout << "Please enter a number of at least zero. ";
		cin >> val2;
	}

	cout << "How far would you like to take the sequence? ";
	cin >> position;

	while (position < 3)
	{
		cout << "Please enter a position greater than 3. ";
		cin >> position;
	}

	//cout << val1 << " " << val2;

	valnew = fibcalc(val1, val2, position);

	cout << valnew << endl;
}

int fibcalc(int vala, int valb, int pos)
{
	int valc;
	int valtemp;
	int n;
	//int posi;

	for (n = 0; n <= (pos - 3); n++ )
	{
		//valtemp = vala;
		valc = vala + valb;
		vala = valb;
		valb = valc;
		//cout << " " << valc;
	}

	return valc;
}


