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

    cout << endl;
    
        char a;
	    cin>>a;
	

    if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U') {
        cout << "It is a vowel letter" << endl;
    } if(letter != 'a' && letter != 'A' && letter != 'e' && letter != 'E' && letter != 'i' && letter != 'I' && letter != 'o' && letter != 'O' && letter != 'u' && letter != 'U'){
        cout << "It is a consonant letter" << endl;
    }

    return 0;
}
