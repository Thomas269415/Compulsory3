#pragma once
#include <iostream>
#include "File.h"
using namespace std;

class Folder {
private:
    string name;
    string dateOfCreation;
    int size;
    File* files[10];
    Folder* folders[5];
public:
    Folder(string newName, string newDateOfCreation, int newSize) {
        name = newName;
        dateOfCreation = newDateOfCreation;
        size = newSize;
        for (int i = 0; i < 10; i++) {
            files[i] = nullptr;
        }
        for (int i = 0; i < 5; i++) {
            folders[i] = nullptr;
        }
    }

    string getName() {
        return name;
    }

    string getDate() {
        return dateOfCreation;
    }

    int getSize() {
        return size;
    }

    void setName(string newName) {
        name = newName;
    }

    void addFile(File* file) {
        bool cs = false;
        for (int i = 0; i < 10; i++) {
            if (!files[i]) {
                files[i] = file;
                cs = true;
                break;
            }
        }
        if (!cs) {
            cout << "Too many files" << endl;
        }
    }

    void addFolder(Folder* folder) {
        bool cs = false;
        for (int i = 0; i < 5; i++) {
            if (!folders[i]) {
                folders[i] = folder;
                cs = true;
                break;
            }
        }
        if (!cs) {
            cout << "Too many folders" << endl;
        }
    }

    void listFile() {
        cout << "The files in folder " << name << "are: " << endl;
        for (int i = 0; i < 10; i++) {
            cout << "Name: " << files[i]->getName() << ", Size: " << files[i]->getSize() << " MB, Date of Creation: " << files[i]->getDateOfCreation() << endl;
        }
    }

    void listFolders() {
        cout << "The folders in folder " << name << "are: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Name: " << folders[i]->getName() << ", Size: " << folders[i]->getSize() << " MB, Date of Creation: " << folders[i]->getDate() << endl;
        }
    }

    void changeFileName(int i, string newName) {
        if (i >= 0 && i < 10 && files[i]) {
            files[i]->setName(newName);
        }
    }

    void changeFolderName(int i, string newName) {
        if (i >= 0 && i < 5 && folders[i]) {
            folders[i]->setName(newName);
        }
    }

};