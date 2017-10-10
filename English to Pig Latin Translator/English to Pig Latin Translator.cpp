// English to Pig Latin Translator.cpp : Defines the entry point for the console application.
//Program designed to translate English word into Pig Latin.

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
	char wordArray[50];
	char response;
	int translateIntoPigLatin(char Array[]);

	do
	{
		//Begins the program
		cout << "Welcome to the English to Pig Latin Translator program. \n";
	    cout << "Please enter a word that will be translated into Pig Latin. " << endl;
		cin >> wordArray;

		// checks for vowels in the words
		if (wordArray[0] == 'A' || wordArray[0] == 'a' || wordArray[0] == 'E' || wordArray[0] == 'e' ||
			wordArray[0] == 'I' || wordArray[0] == 'i' || wordArray[0] == 'O' || wordArray[0] == 'o' ||
			wordArray[0] == 'U' || wordArray[0] == 'u')
		{
			cout << wordArray << 'ay' << endl;
		}
		else
		{
			translateIntoPigLatin(wordArray);
		}

		cout << "Do you want to continue? (Enter Y for yes)" << endl;
		cin >> response;

	} while ((response == 'Y') || (response == 'y'));

    return 0;
}

int translateIntoPigLatin(char wordArray[])
{
	char PigLatin[50];

	for (int i = 1; i <= 50; i++)
	{
		PigLatin[i - 1] = wordArray[i];
	}

	cout << PigLatin << wordArray[0] << "ay" << endl;

	return 0;
}