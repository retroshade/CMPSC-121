/*
Ryan Mysliwiec
CMPSC 121, Sec 016
2/24/15

Input: Letter the user wants to use, starting amount of letters, ending amount of letters
Processing: Create lines of the letter, starting with the number given by the user, until it reaches the limit given by user
Output: Pattern of letters with dimensions input by user
*/

#include <iostream>
using namespace std;

int main()
{
	char letter;
	int start, end, difference;
	int i, j, c;		//i and j are counters, 1st and 2nd

	cout << "Please enter the letter you would like to use. ";
	cin >> letter;
	
	cout << "Please enter the number of columns in the first row. ";
	cin >> start;

	cout << "Please enter the number of columns in the last row. ";
	cin >> end;

	difference = start - end;

	if (difference <= 0)
	{
		c = 1;
		end++;
	}
	else if (difference > 0)
	{
		c = -1;
		end--;
	}

	for (i = start; i != end; i = i + c)
	{
		for (j = 0; j < i; j++)
		{
			cout << letter;
		}
		cout << "\n";
	}

}