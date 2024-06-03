#include <iostream>

using namespace std;

int main()
{
    char letter;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char vowelLetters[10];
    char consonantLetters[10];
    int vowelCount = 0;
    int consonantCount = 0;

    cout << "Enter 10 letters: \n";

    for (int i = 0; i < 10; i++)
    {
        cin >> letter;

        bool isVowel = false;

        for (int j = 0; j < 10; j++)
        {
            if (letter == vowels[j])
            {
                isVowel = true;
                break;
            }
        }

        if (isVowel)
        {
            vowelLetters[vowelCount++] = letter;
        }
        else
        {
            consonantLetters[consonantCount++] = letter;
        }
    }

    cout << "Vowel letters are: ";
    for (int i = 0; i < vowelCount; i++)
    {
        cout << vowelLetters[i] << " ";
    }
    cout << endl;

    cout << "Consonant letters are: ";
    for (int i = 0; i < consonantCount; i++)
    {
        cout << consonantLetters[i] << " ";
    }
    cout << endl;

    return 0;
}

