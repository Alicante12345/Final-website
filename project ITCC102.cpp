#include <iostream>
#include <string>

using namespace std;

int main()
{
	string letter [10];
	
	cout << "Enter 26 letter: \n";
	
	for(int i=0; i=26; i++){
		cin >> letter [i];
	}
	cout << "Vowel letter are:";
	
	for (int i=0; i<26; i++){
		
		if(letter[i] =="A" || letter[i] =="a" ||letter[i] =="E" || letter[i] =="e" || letter[i] =="I" || letter[i] =="i" || 
	letter[i] =="O" || letter[i] =="o" || letter[i] =="U" || letter[i] =="u"){
		cout << letter [i]<< ", ";
	}
	}
	
	
	cout << "Consonant letter are: ";
	
		for (int i=0; i<26; i++){
		if(letter[i] !="A" && letter[i] !="a" && letter[i] !="E" && letter[i] !="e" && letter[i] !="I" && letter[i] !="i" && 
	letter[i] !="O" || letter[i] !="o" || letter[i] !="U" || letter[i] !="u"){
		cout << letter [i]<< ", ";
	}
	}
	
	return 0;
}

