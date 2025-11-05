/*Napišite funkciju void fix_spaces(std::string& text) koja:
· uklanja višestruke razmake (ostavlja samo jedan razmak izmeðu rijeèi),
· uklanja razmake prije zareza i toèke, a dodaje, ako veæ nema, razmak nakon zareza.
Napomena: Koristite funkcije STL-a za pronalaženje, brisanje i dodavanje znakova.
Primjer: "Puno razmaka ,i tocka ." -> "Puno razmaka, i tocka."
*/

#include <iostream>
#include <string>
#include "funkcije.h"

void razmaci(std::string& text) {
	//višestruki razmaci
	for (size_t i = 1; i < text.size();) {
		if (text[i] == ' ' && text[i - 1] == ' ') {
			text.erase(i, 1);
		}
		else
		{
			++i;
		}
	}

	//razmaci prije interpunkcije
	for (size_t i = 1; i < text.size(); ++i) {
		if ((text[i] == ',' || text[i] == '.') && text[i - 1] == ' ') {
			text.erase(i - 1, 1);
			--i;
		}
	}

//dodaj razmak iza zareza
	for (size_t i = 0; i + 1 < text.size(); ++i)
	{
		if (text[i] == ',' && text[i + 1] != ' ')
		{
			text.insert(i + 1, " ");
		}
	}
}