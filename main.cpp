#include <iostream>
#include <vector>
using namespace std;
#include "pointers.h"
#include "arrays.h"
#include "MemoryAlocation.h"
#include "vectors.h"
#include "solution.h"
#include "STL.h"
#include <algorithm>

bool is_pallindrom(int x){
    string y = to_string(x);
    string reversed = y;

    reverse(reversed.begin(),reversed.end());
    return reversed == y;
}
int main() {
//    pointers();
//    arrays_modification();
//    MemoryAlocation();

        vectors();
//    solution();
    //STL();
    cout << "\n\n"<<is_pallindrom(121);
    return 0;
}
