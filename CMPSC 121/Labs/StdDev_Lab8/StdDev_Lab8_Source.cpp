/*
Ryan Mysliwiec
CMPSC 121, Sec 001
3/31/15

This program is designed to calculate the standard deviation of values input from a file.
Input: Values from file 
Processing: Count number of values in file,calculate standard deviation
Output: Standard Deviation of all values in the file
*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void filecount(int&, double&, double []);
double stddev(int, double, double[]);
int main()
{
	int numofval;
	double valavg;
	double filearray[700];
	filecount(numofval, valavg, filearray);
	//cout << endl << numofval << endl << valavg << endl;
	cout << stddev(numofval, valavg, filearray);
}

void filecount(int& numval, double& avgval, double filearray[])
{
	ifstream infile;
	double j, temp, sum=0;
	int count;
	numval = 0;

	infile.open("Lab7Section1.dat");

	while (infile >> temp)
	{
		sum = sum + temp;
		numval++;
	}
	
	infile.close();

	infile.open("Lab7Section1.dat");

	for (count = 0; infile >> j; count++)
	{
		filearray[count] = j;
	}

	avgval = sum / numval;
}

double stddev(int numberval, double average, double filearray[])
{
	double radicand;
	int counter;
	double total = 0;
	
	for (counter = 0; counter <= numberval; counter++)
	{
		total = total + (pow((filearray[counter] - average), 2));
	}

	double StanDev = sqrt(total);

	return StanDev;

}