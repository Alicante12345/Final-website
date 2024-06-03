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

	

    if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U') {
        cout << " and a vowel letter" << endl;
    } else {
        cout << " and a consonant letter" << endl;
    }

    return 0;
}

