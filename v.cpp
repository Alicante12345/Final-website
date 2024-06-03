#include <iostream>
#include <string>

using namespace std;

int main()
{
    string letter;
    string vowels = "aeiouAEIOU";
    string vowelLetters = "";
    string consonantLetters = "";

    cout << "Enter 26 letters: \n";

    for (int i = 0; i < 26; i++)
    {
        cin >> letter;

        if (vowels.find(letter) != string::npos)
        {
            vowelLetters += letter + ", ";
        }
        else
        {
            consonantLetters += letter + ", ";
        }
    }

    cout << "Vowel letters are: " << vowelLetters << endl;
    cout << "Consonant letters are: " << consonantLetters << endl;

    return 0;
}

