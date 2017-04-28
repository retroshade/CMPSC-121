/*
Ryan Mysliwiec
CMPSC 121
Section 001

Input: Numbers of rows and columns from Lab9S1.dat, along with the values of each of those coordinates
Processing: Main function will call functions that determine the size of the file, out put the array, and
	determine the products of each column in the array.
Output: 2D array, product of each column
*/

#include <iostream>
#include <fstream>
using namespace std;

void fileopen(int&, int&, double arrayA[][15]);
void arrayaccept(int&, int&, double arrayA[][15]);
void columnproduct(int&, int&, double arrayA[], double arrayB[][15]);

int main()
{
	double table[25][15];
	double prodtable[15];
	int rows, columns, col;

	fileopen(rows, columns, table);
	arrayaccept(rows, columns, table);
	
	cout << endl;

	for (col = 0; col < columns; col++)
	{
		cout << "The product of column " << col << " is " << columnproduct(rows, columns, prodtable, table);
	}
}

/*
This function will be used to open the file, determine the size, then input the values into an array
The function will then send the number of rows and columns back to function call
*/

void fileopen(int& numrows, int& numcolumns, double arrayA[][15])
{
	ifstream infile;

	infile.open("Lab91.dat");

	infile >> numrows >> numcolumns;
	
	for (int j = 0; j < numrows; j++)
	{
		for (int k = 0; k < numcolumns; k++)
		{
			infile >> arrayA[j][k];
		}
	}
	
}

/*
This function will be used to output the 2D array. It will accept the array, number of rows and columns
*/
void arrayaccept(int& numberR, int& numberC, double arrayA[][15])
{

	for (int m = 0; m < numberR; m++)
	{
		for (int n = 0; n < numberC; n++)
		{
			cout << arrayA[m][n] << "\t";
		}
		cout << endl;
	}
}

/*
This function will be used to determine the product of each column, store them as a 1D array, 
then send this array back to function call
*/

void columnproduct(int& numR, int& numC, double arrayA[], double arrayB[][15])
{
	double product = 1;
	
	for (int r = 0; r < numR; r++)
	{
		product = product*arrayB[r][numC];
	}
}