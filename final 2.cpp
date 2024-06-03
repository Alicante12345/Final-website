#include <iostream>
using namespace std;

int main() {
    char letter;
    cin >> letter;

    if (letter >= 'a' && letter <= 'z') {
        cout << "It is a lowercase letter" << endl;
    } else if (letter >= 'A' && letter <= 'Z') {
        cout << "It is an uppercase letter" << endl;
    }

    char a;
    cin >> a;

    if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U') {
        cout << "It is a vowel letter" << endl;
    } else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        cout << "It is a consonant letter" << endl;
    } else {
        cout << "It is not a letter" << endl;
    }

    return 0;
}
