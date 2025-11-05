#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

void moj_reverse(std::vector<std::string>& words) {
	for (std::string& word : words) {
		std::reverse(word.begin(), word.end());
	}
}

int main() {
    std::vector<std::string> rijeci = { "hello", "world", "c++" };

    std::cout << "Prije okretanja:\n";
    for (const std::string& s : rijeci)
        std::cout << s << " ";
    std::cout << std::endl;

    moj_reverse(rijeci);

    std::cout << "Nakon okretanja:\n";
    for (const std::string& s : rijeci)
        std::cout << s << " ";
    std::cout << std::endl;

    return 0;
}
