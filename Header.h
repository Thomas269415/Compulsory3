#pragma once
#include <iostream>
using namespace std;

class Folder {
private:
	string name;
	int randSize = rand() % 100, creationDate;
public:
	Folder(string newName, int newRandSize, int newCreationDate)
	{
		name = newName;
		randSize = newRandSize;
		creationDate = newCreationDate;
	}

	string getName()
	{
		return name;
	}

	int getSize()
	{
		return randSize;
	}

	int getCreationDate()
	{
		return creationDate;
	}

	void setName(string newName)
	{
		name = newName;
	}
	
	void setSize(int newRandSize)
	{
		randSize = newRandSize;
	}

	void setCreationDate(int newCreationDate)
	{
		creationDate = newCreationDate;
	}

	void print()
	{
		cout << name << endl;
		cout << randSize << endl;
		cout << creationDate << endl;

	}
};