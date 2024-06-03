#include <iostream>
using namespace std;

int main() {
    char letter;
    cin >> letter;

    if (letter >= 'a' && letter <= 'z') {
        cout << "It is a lowercase letter";
    } else if (letter >= 'A' && letter <= 'Z') {
        cout << "It is an uppercase letter";
    }
	
	cout << end1;

    if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U') {
        cout << " it is a vowel letter" << endl;
    } else {
        cout << " it is a consonant letter" << endl;
    }

    return 0;
}

