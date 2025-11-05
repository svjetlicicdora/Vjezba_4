//void input_vector(vector<int>& v) - unosi brojeve dok se ne unese 0

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "funkcije.h"

void unos(std::vector<int>& v) {
	int broj;
	std::cout << "Unesi brojeve ili 0 za kraj: ";
	while(std::cin>> broj && broj != 0) {
		v.push_back(broj);
	}
}

//funkcija za ispis
void print(const std::vector<int>& v) {
	std::cout << "Elementi vektora: ";
	for (int x : v) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
}

//funkcija za jedinstvene elemente

std::vector<int> jedinstveni(const std::vector<int>& v) {
	std::vector<int>jedinstven;
	for (int x : v) {
		if (std::find(jedinstven.begin(), jedinstven.end(), x) == jedinstven.end()) {
			jedinstven.push_back(x);
		}
	}
	return jedinstven;
}

//sortiranje po apsolutnoj vrijednost
std::vector<int>apsolut(std::vector<int>& v) 
{
	std::sort(v.begin(), v.end(), [](int a, int b){
		return std::abs(a) < std::abs(b);
});
return v;
}

//ispis apsolutnih
void print_apsolut(const std::vector<int>& v)
{
	std::cout << "Sortirani po apsolutnoj vrijednosti:\n";
	for (int x : v) {
		std::cout << x << " (|" << std::abs(x) << "|)" << std::endl;
	}
}
