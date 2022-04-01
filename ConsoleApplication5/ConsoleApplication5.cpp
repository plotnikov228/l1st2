#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;


bool isOdd(int num) {
    return (num & 1);
}

int main() {
    list<int> L;
    L.push_back(5);
    L.push_back(2);
    L.push_back(6);
    L.push_back(9);
    L.push_back(4);
    L.push_back(3);
    L.push_back(8);

    cout << "All list:" << endl;
    copy(L.begin(), L.end(), ostream_iterator<int>(cout, " "));

    L.remove_if(isOdd);

    cout << endl << "Without odds:" << endl;
    copy(L.begin(), L.end(), ostream_iterator<int>(cout, " "));

    cout << endl;

    return 0;
}
