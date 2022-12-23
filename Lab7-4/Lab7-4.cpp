#include "formain.h"

using namespace std;

void printVector(vector<float> vec);

void addVector(vector<float>& vec, int index, int value);

map<int, int> formain::mp;



int main() {

    vector<float> vec = { 1, 2, 3, 4, 5 };

    printVector(vec);

    addVector(vec, 3, 20);

    printVector(vec);

    vec.pop_back();

    printVector(vec);



    cout << "______________\n\n";



    // formain map;

    // map.add(1, 20);

    // map.add(5, 8);

    // map.add(3, 13);

    // cout << map.get(5) << endl;

    // map.print();



    Settings::add(1, 20);

    Settings::add(5, 8);

    Settings::add(3, 13);

    cout << Settings::get(5) << endl;

    Settings::print();

}



void printVector(vector<float> vec) {

    for (int i = 0; i < vec.size(); i++) {

        cout << vec.at(i) << ' ';

    }

    cout << endl;

}



void addVector(vector<float>& vec, int index, int value) {

    vector<float>::iterator it = vec.begin();

    for (int i = 0; i < index; i++) {

        it++;

    }

    vec.insert(it, value);

}