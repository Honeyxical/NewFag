#include <iostream>
#include <ctime>

using namespace std;

int getRand();

int main() {
    srand(time(NULL));
    string mass[10];
    int rNum = 0;
    int actionCount = 0;

    for (int i = 0; i < 10; i++) {
        mass[i] = "˅";
        cout << mass[i];
    }

    cout << endl;

    for (int i = 0; i < 10; i++) {
        rNum = getRand();
        if (rNum == 0) {
            mass[i] = '<';
        } else {
            mass[i] = '>';
        }
        cout << mass[i];
    }

    cout << endl;
    bool exit = false;
    while (!exit) {
        for (int i = 0; i < 10; i++) {
            exit = true;
            if (mass[i] == ">" && mass[i + 1] == "<") {
                mass[i] = "<";
                actionCount++;
                exit = false;
                break;
            }
            cout << mass[i];
        }
        actionCount = 0;
        cout << endl;
    }

    cout << "*Sergeant beeps*";

    return 0;
}

int getRand() {
    int k = rand() % 2;
    return k;
}
