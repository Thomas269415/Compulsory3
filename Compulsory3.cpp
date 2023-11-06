#include <iostream>
#include <ctime>
#include <time.h>
#include "Folder.h"
#include "File.h"
using namespace std;

int main() {
    time_t result = time(nullptr);
    string currentTime = ctime(&result);

    Folder mainFolder("MainFolder", currentTime, rand() % 100 + 1);
    bool cont = true;

    while (cont) {
        cout << "Choose what to do:" << endl;
        cout << "1. Create folder" << endl;
        cout << "2. Create file" << endl;
        cout << "3. Look through largest file" << endl;
        cout << "4. Exit program" << endl;
        int yourChoice;
        cin >> yourChoice;
        if (cin.fail()) {
            cout << "Please enter numbers only\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (yourChoice) {
            case 1: {
                string folderName;
                cout << "Enter folder name: " << endl;
                cin >> folderName;
                Folder newFolder(folderName, currentTime, rand() % 100 + 1);
                mainFolder.addFolder(&newFolder);
                break;
            }
            case 2: {
                string fileName;
                cout << "Enter file name: " << endl;
                cin >> fileName;
                File newFile(fileName, currentTime, rand() % 100 + 1);
                mainFolder.addFile(&newFile);
                break;
            }
        case 3:

            break;
        case 4:
            cont = false;
            break;
        default:
            cout << "yo" << endl;

        }
    }



    return 0;
}