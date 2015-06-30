#pragma once
#include <string.h>
#include <fstream>
#include  "cElement.h"

using namespace std;

template <class T> class cFile
{
	//Private Members

	//Used for input and output - to and from files.
	ifstream _readFile;
	ofstream _writeFile;

	//The file's directory
	char * _directory;

public:

	//1 - C'Tor that recieves a files directory
	cFile(char * dir)
	{
		_directory = _strdup(dir);
	}


	//2 - Reading a "T"
	T read()
	{
		//Avariable for the "T" being red
		T bogie;

		_readFile.open(_directory, ios::in);
		_readFile >> bogie;
		_readFile.close();

		return bogie;
	}


	//3 - Reads #aNum variables from the file, and counts the time it red and returns the count
	int read(T **apBuf, int aNum)
	{
		//allocating the same amount of variables asked by aNum
		apBuf = new T*[aNum];

		_readFile.open(_directory, ios::in);
		//Transfering
		for (i = 0; i < aNum; i++)
		{

			if (_readFile.eof()) //Stopping the read if going out of lines to read
			{
				break;
			}

			apBuf[i] = new T;
			*apBuf[i] = read();
		}

		_readFile.close();

		//return the amount of lines transferd
		return _numOfLines;
	}

	//4 - Writing a single "T" to the file
	void write(const T &t)
	{
		_writeFile.open(_directory, ios::app);
		_writeFile << t << endl;
		_writeFile.close();
	}


	//5 - This method writes #aNum variables from apBuf into the file
	void write(T *apBuf, int aNum)
	{
		_writeFile.open(_directory, ios::out);

		for (int i = 0; i < aNum; i++)
		{
			write(*apBuf[i]);
		}
	}


	//6 - The Method return the "size" of the file determand by the amount of lines
	int size()
	{
		int size = 0;

		_readFile.open(_directory);
		//Counting and raising the flag higher and higher - keeps going untill recieving a false/null from getline
		while (getline(_readFile, string _bogie))
		{
			size++;
		}

		return size;
	}

};


