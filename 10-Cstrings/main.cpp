#include <iostream>
#include <cstring>
using namespace std;
//
struct Player
{
	char name[80];
};


void whiteSpace()
{
	
	
	char message[80];

	//cin >> message;

	

	cin.getline(message, 80);
	int length = strlen(message);

	char space = 32;
	for (int i = 0; i < length; i++)
	{
		if (message[i] !=  space )
		{
			cout << message[i];
		}
	}

}
bool isAlpha(char query)
{
	return query >= 'A' && query <= 'Z' ||
		query >= 'a' && query <= 'z';
}

char toLower(char query)
{
	if (query >= 'A' && query <= 'Z')
	{
		query += 'a' - 'A';
		return query;
	}
}



bool isPalindrome(char string[])
{
	int i = 0, j = strlen(string) - 1;
	do
	{
		while (!isAlpha(string[i]) && i < strlen(string)) i++;
		while (!isAlpha(string[j])) j--;

		if (toLower(string[i]) != toLower(string[j]))
			return false;
		i++;
		j--;
	} while (j>=0);
	return true;
}

//my way
//\/\/\/\/\/\/\/
void palindromes()
{
	char message[80];
	char temp[80];
	cin.getline(message, 80);
	int length = strlen(message);
	//char temp[] = "\0";
	for (int i = 0; i < length; i++)
	{
		temp[i] = message[length - i -1];	
	}
	temp[length] = message[length];
	if(strcmp(temp, message ) == 0)
	{
		cout << "memes" << endl;
	}
	else
	{
		cout << "no memes" << endl;
	}
		
}

void main()
{	//definition
	char buffer[80];
	//instantiation
	char cstring[] = "Dinos are cool!";
	char buffer2[80] = { 0 };
	char myString[80];
	/*char hWorld[] = "HELLO ";

	char uName[80];

	cin >> uName;

	strcat_s(hWorld, 80, uName);
	cout << hWorld << endl;*/
	cin.getline(myString, 80);



	//whiteSpace();

	isPalindrome(myString);
	//palindromes();
	
	
	
	
	//assignment
	
	
	
	strcpy_s(buffer, "String");
	

	//length
	int length = strlen(buffer);


	//concatenation
	strcat_s(buffer, cstring);


	int result = strcmp(buffer, cstring);

	/*char fColor[80] = "";
	char red[] = "Red\0"; 
	char purple[] = "Purple\0";
	char green[] = "Green\0";

	cin >> fColor;

	if (strcmp(fColor, red) == 0)
	{
		cout << "k";
	}
	else if (strcmp(fColor, purple) == 0)
	{
		cout << "k";
	}
	else if (strcmp(fColor, green) == 0)
	{
		cout << "k";
	}
	else
	{
		cout << "THATS A STUPID COOLOR" << endl;
	}*/
	














	while (true) {};
}


void addStrings(char dst[], int size, char src1[], char src2[])
{
	//copies data form src1 into the dst buffer
	strcpy_s(dst, size, src1);
	//concats data from src2 into dst buffer
	strcat_s(dst, size, src2);
	//result should be src1+src2
}