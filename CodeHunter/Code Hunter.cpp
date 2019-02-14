//#include "stdafx.h" Not used for this program.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string textToAnalyze;
	//foo is not used for this program
	//int foo = 0;
	//Count Vowels like AEIOU
	int vowels = 0;
	//Counts consonants
	int consonants = 0;
	//Count digits
	int digits = 0;
	//Count how many spaces.
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	//Counts unknown characters
	int unknownCharacters = 0;
	int checkSum = 0;
	//Bar is not used for this program
	//int bar = 0; 
	//original line is code which is a bit of a typo.
	cout << "Welcome to the CIA Code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//Vowels is fine
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'o'
			|| textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A'
			|| textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O'
			|| textToAnalyze[i] == 'U')
			{
				//--vowels;
				//Add not subtract
			++vowels;
			}
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z' || textToAnalyze[i] >= 'A' || textToAnalyze[i] <= 'Z'))
		{
			++consonants;
		}
		//Digits
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		//Space is fine
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		else
		{
			++unknownCharacters;
		}
	}
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;
	//Display the results
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}
	//Pause Program
	system("pause");
	//Returns
	return 0;
}