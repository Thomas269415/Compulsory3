#pragma once
#include <iostream>
#include <random>
#include <cstdlib>
using namespace std;

class File {
private:
    string name, dateOfCreation;
    int size;



public:
    File(string newName, string newDateOfCreation, int newSize) {
        name = newName;
        size = newSize;
        dateOfCreation = newDateOfCreation;
        size = rand() % 100 + 1;
    }

    string getName() {
        return name;
    }

    int getSize() {
        return size;
    }

    string getDateOfCreation() {
        return dateOfCreation;
    }

    void setName(string newName) {
        name = newName;
    }

};