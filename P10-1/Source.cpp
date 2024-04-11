#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

string scramble(string word) {

	int upper = word.size() - 1;
	int lower = 1;
	int firstIndex = rand() % (upper - lower + 1) + lower;
	int secondIndex = rand() % (upper - lower + 1) + lower;
	char t = word[firstIndex];

	word[firstIndex] = word[secondIndex];
	word[secondIndex] = t;

	return word;
}

int main() {

	srand(time(0));
	
	string word;
	cout << "Enter a string: ";
	cin >> word;
	cout << scramble(word);
}