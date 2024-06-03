#include <iostream>
#include <cctype> // For isalpha() and tolower()

using namespace std;

int main() {
    char input;
    int vowels = 0, consonants = 0;

    cout << "Enter alphabets (0 to end): ";

    while (cin >> input && input != '0') {
        // Convert input to lowercase for easier comparison
        char lowercase_input = tolower(input);
        
        if (isalpha(input)) {
            // Check if input is a vowel
            if (lowercase_input == 'a' || lowercase_input == 'e' || lowercase_input == 'i' || lowercase_input == 'o' || lowercase_input == 'u') {
                cout << input << " is a vowel." << endl;
                vowels++;
            } else {
                cout << input << " is a consonant." << endl;
                consonants++;
            }
        } else {
            cout << "Invalid input. Please enter an alphabet." << endl;
        }

        // Display corresponding uppercase or lowercase output
        if (islower(input)) {
            cout << "Uppercase: " << (char)toupper(input) << endl;
        } else if (isupper(input)) {
            cout << "Lowercase: " << (char)tolower(input) << endl;
        }
    }

    cout << "\nTotal number of vowels: " << vowels << endl;
    cout << "Total number of consonants: " << consonants << endl;

    return 0;
}
