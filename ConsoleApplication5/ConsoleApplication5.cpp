#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

bool isOdd(int num) {
    return (num & 1);
}

int main() {
    std::list<int> L;
    L.push_back(5);
    L.push_back(2);
    L.push_back(6);
    L.push_back(9);
    L.push_back(4);
    L.push_back(3);
    L.push_back(8);

    std::cout << "All list:" << std::endl;
    std::copy(L.begin(), L.end(), std::ostream_iterator<int>(std::cout, " "));

    L.remove_if(isOdd);

    std::cout << std::endl << "Without odds:" << std::endl;
    std::copy(L.begin(), L.end(), std::ostream_iterator<int>(std::cout, " "));

    std::cout << std::endl;

    return 0;
}