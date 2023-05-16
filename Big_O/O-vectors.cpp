#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> MyVect = {11, 3, 21, 7};

    // O(1) because adding/removing from the end (will NOT touch other values)
    MyVect.push_back(17);
    MyVect.pop_back();

    // O(n) because adding/removing from the beginning/middle (will touch other values)
    MyVect.erase(MyVect.begin());
    MyVect.insert(MyVect.begin(), 11);
    MyVect.insert(MyVect.begin()+2, 15);


}




