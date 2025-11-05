/*Napišite funkciju std::string word_to_pig_latin(const std::string& word) koja:
· ako rijeè poèinje samoglasnikom: dodaje ”hay”
· ako poèinje suglasnikom: premješta prvo slovo na kraj i dodaje ”ay”
Primjer: "apple" -> "applehay"
"hello" -> "ellohay"*/

#include <iostream>
#include <string>

std::string word_to_pig_latin(const std::string& word) 
{
	char first = std::tolower(word[0]);
	std::string samoglasnici = "aeiou";

	if (samoglasnici.find(first) != std::string::npos) {
		return word + "hay";
	}
	else
	{
		return word.substr(1) + word[0] + "ay";
	}
}


int main() {
	std::cout << word_to_pig_latin("apple") << std::endl;  
	std::cout << word_to_pig_latin("hello") << std::endl;  
	std::cout << word_to_pig_latin("Orange") << std::endl; 
}

