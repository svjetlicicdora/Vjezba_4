#include <iostream>
#include <vector>
#include "funkcije.h"

int main() {
    std::vector<int> moj_vektor;

    unos(moj_vektor);
    std::cout << "Originalni vektor:\n";
    print(moj_vektor); 

    std::vector<int>jedinstven_v = jedinstveni(moj_vektor);
    std::cout << "Jedinstveni elementi:\n";
    print(jedinstven_v);

    apsolut(jedinstven_v);
    print_apsolut(jedinstven_v);

    return 0;
}
