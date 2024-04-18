#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string string_scramble(string word) {
    if (word.length() <= 3)
        return word;

    int len = word.length();
    int index1, index2;

    do {
        index1 = 1 + rand() % (len - 2);
        index2 = 1 + rand() % (len - 2);
    } while (index1 == index2);

    char temp = word[index1];
    word[index1] = word[index2];
    word[index2] = temp;

    return word;
}

int main() {
    srand(time(0));

    cout << "Enter a line of text: ";
    string line;
    getline(cin, line);

    string word = "";
    for (char c : line) {
        if (c == ' ' || c == '\t' || c == '\n') {
            
            cout << string_scramble(word) << " ";
            word = "";
        }
        else {
            word += c;
        }
    }

    if (!word.empty()) {
        cout << string_scramble(word);
    }
}