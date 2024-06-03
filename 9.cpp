#include <iostream>
using namespace std;

int main() {
    char letter;
    int vowelCount = 0;
    int consonantCount = 0;
   
    cout << "Enter a letter (or 0 to end): ";
    cin >> letter;
   
    while (letter != '0') {
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
            vowelCount++;
        } else {
            consonantCount++;
        }
       
        cout << "Enter a letter (or 0 to end): ";
        cin >> letter;
    }
   
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;
   
    return 0;
}
