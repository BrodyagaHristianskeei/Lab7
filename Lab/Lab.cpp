#include <iostream>

#include <string>



using namespace std;



int main() {

    string Str;

    int ct = 0, length;

    cout << "Input string: ";

    getline(cin, Str);

    if (Str.size() > 3) {

        for (int i = 1; i < 4; i++) {

            cout << Str[i];

        }

    }
    else {

        cout << "Length lesser then 4";

    }

    for (int i = 0; i < Str.size(); i++) {

        if (Str[i] == 'a') {

            cout << endl << i << endl;

            ct = 1;

            break;

        }

    }

    if (ct == 0) {

        cout << endl << "No symbol a" << endl;

    }



}