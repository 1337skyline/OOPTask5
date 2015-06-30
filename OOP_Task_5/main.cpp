#include "cFile.h"
#include  "cElement.h"
using namespace std;

void main()
{
	//I had a complete menu structure but didn't have enought time to complete it (excuses, I know)

	//creating the file
	cFile < cElement > text("ROFL.txt");
	int WOOT, i;

	//creating an array of the test element kind

	cElement /****/aDigitArray[4] = { 1, 3, 3, 7 };

	/*
	cout << "Please enter the amount of digits in the cElement array:" << endl;
	fflush(stdin);
	cin >> WOOT;

	aDigitArray = new cElement*[WOOT];
	*/

	cout << "Please enter 4 'init's to enter into the array." << endl << endl;
	for (i = 0; i < 4; i++)
	{
		cout << "Enter digit #" << i << " that you'd like to have in the array." << endl;
		fflush(stdin);
		cin >> /***/aDigitArray[i];
		cout << endl;
	}
	/*
	cout << "How many of the cElement's you've entered would you like to write to the file?" << endl;
	cout << "Note: Entering to write into the file will use the standard write function," << endl << "Write a smaller number and the 'void write(T** &apBuf, int aNum' function would be used" << endl;
	fflush(stdin);
	cin >> WOOT;

	if(woot < 4)
	{

	}
	else 
	*/

	//writing the array into the file.
	for (i = 0; i < 4; i++)
	{
		text.write(/***/aDigitArray[i]);
	}

	//Reading from the file if the users comply.
	cout << "Would you like to read the elements from the file and print them?" << endl << "Enter 1 for yes and 0 for no" << endl;
	fflush(stdin);
	cin >> WOOT;

	if(WOOT)
	{
		for (i = 0; i < 4; i++)
		{
			cout << text.read() << endl << endl;
		}
		cout << "Enter any number to exit." << endl;
		fflush(stdin);
		cin >> WOOT;
	}
}