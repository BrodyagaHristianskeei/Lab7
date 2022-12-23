#include <regex>

#include <iostream>

using namespace std;

bool isName(string str);

void isEmail(string str);



int main() {

    string name, boofer;

    cout << "your name:\n";

    cin >> name;

    if (!isName(name)) {

        cout << "Invalid name\n";

    }

    cout << "__________________\n\n";

    string emails("bob outlook@gmail.com bob inlook@mail.ru");



    for (int i = 0; i < emails.size(); i++) {

        if (emails[i] != ' ') {

            boofer.insert(boofer.end(), emails[i]);

        }
        else

        {

            isEmail(boofer);

            boofer.erase();

        }

    }

}

bool isName(string str) {

    regex reg("(?=.{2,32}$)[A-Z][A-Za-z]");

    return regex_search(str, reg);

}

void isEmail(string str) {

    regex reg("^[a-z0-9_][a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}$", regex_constants::icase);

    if (regex_search(str, reg)) {

        cout << str << endl;

    }

}