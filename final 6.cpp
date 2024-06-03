#include <iostream>
using namespace std;

int main() {
    char letter;

    // Taking a character as input
    cout << "Enter a letter: ";
    cin >> letter;

    // Checking if it is a lowercase letter
    if (letter >= 'a' && letter <= 'z') {
        cout << "It is a lowercase letter";
    } 
    // Checking if it is an uppercase letter
    else if (letter >= 'A' && letter <= 'Z') {
        cout << "It is an uppercase letter";
    } 
    // If it's neither lowercase nor uppercase, it's not a letter
    else {
        cout << "It is not a letter" << endl;
        return 0; // Exit the program
    }

    // Checking if it is a vowel or consonant
    if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U') {
        cout << " and a vowel letter" << endl;
    } else {
        cout << " and a consonant letter" << endl;
    }

    return 0;
}

