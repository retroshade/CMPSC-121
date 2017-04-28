/*
Ryan Mysliwiec
CMPSC 121, Sec 001
3/17/15

This program will call a void function that opens a file, counts how many values are in the file, sums them, and sends the number
of values and sum back to main for output.

Input: Lab7Section1.dat
Processing: Calculate number of values and sum of values
Output: number of values, sum
*/

#include<iostream>
#include<fstream>
using namespace std;

void fileSumNum(int&, float&);

int main()
{
	int num = 0;
	float sum = 0;
	
	fileSumNum(num, sum);

	cout << "There are " << num << " values in the file, with a sum of " << sum << ".\n";
}


/*
fileSumNum will open the file needed. Once it is opened successully, the function will add the values together and increase the number of values by 1.
If opened unsuccessfully, the program will let the user know there was an error when trying to open the file.

Input: data file
Processing: adding the values, calculating total number of values
Output: N/A, since it is void
*/
void fileSumNum(int& number, float& total)
{
	ifstream datain;
	
	float valnew;
	
	datain.open("Lab7Section1.dat");

	if (!datain.fail())
	{
		while (datain >> valnew)
		{
			total = total + valnew;
			number++;
		}
	}
	else
	{
		cout << "Error opening file!\n";
	}
}