/*
Ryan Mysliwiec
CMPSC 121
Sec 001
4/14/15

This program is designed to ask for 10 words from the user, store those
words in a 2D character array, output the array, sort the array ascending,
then outout the sorted array.

Input: 10 unsorted words
Processing: Ask for 10 words, output the array using a function call,
	sort the array using a bubble sort, then output the sorted array.
Output: Unsorted, then sorted array.
*/

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

void input10words(char wordsf1[][21]);
void sortarray(char wordsf2[][21]);
void printarray(char wordsout[][21]);


int main()
{
	char wordsmain[10][21];
	input10words(wordsmain);

	cout << endl;
	printarray(wordsmain);
	cout << endl;
	sortarray(wordsmain);
	printarray(wordsmain);
	cout << endl;


	return 0;
}

/* Function to input 10 words into a 2-d character array
input:  the array is passed to the function and the user is prompted to input 10 words
output:  nothing is output to the screen, the filled array is sent back to the function call
processing:  use a for loop to prompt the user to enter 10 words and store the words into the array
*/

void input10words(char wordsf1[][21])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a word for the array. ";
		cin >> wordsf1[i];
	}
}


/*
This function is used to output the array of words/characters input by the user.

Input: Character array
Processing: Output each word using a for loop.
Output: Character array
*/
void printarray(char wordsout[][21])
{
	for (int j = 0; j < 10; j++)
	{
		cout << wordsout[j] << endl;
	}
}

/*
This function will use the bubble sort method to sort the array ascending

Input: Character array
Processing: Compare one word to the next using the strcmp function, then
	continue with each next word until reaching the end. Swaps if they
	are not in the correct order.
Output: Sorted array when called (nothing from this function).
*/
void sortarray(char wordsf2[][21])
{
	bool sorted = false;
	int i;
	int first = 0;
	int last = 8;
	char arraytemp[21];

	while (!sorted)
	{
		sorted = true;
		for (i = first; i <= last; i++)
		{
			if (strcmp(wordsf2[i], wordsf2[i + 1])>0)
			{
				strcpy_s(arraytemp, wordsf2[i]);
				strcpy_s(wordsf2[i], wordsf2[i + 1]);
				strcpy_s(wordsf2[i + 1], arraytemp);
				
				sorted = false;
			}
		}
		last = last - 1;
	}
}