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
#include <set>

int liczenie_unikalnych_znakow(string string1){
    cout << "\nSTRING:   "<<string1;

    vector<char> vec;

    for (int i =0;i < size(string1);i++){
        bool found = false;
        for(int j = 0;j <size(vec);j++){
            if(vec[j] == string1[i]){
                found = true;
                 break;
            }

        }
        if(!found){
            vec.push_back(string1[i]);
        }
    }
    cout << "\nUNIKE CHARACTERS:\n";
    for(int i =0; i < size(vec);i++){
        cout << vec[i] << " ";
    }
    return size(vec);

}

int set_unikalne_znaki(string s){

    cout << "\nSTRING:   "<<s;
    set<char> unique(s.begin(),s.end());

    cout << "\nUNIQUE CHARS:\n";
    for(auto x : unique){
        cout << x<<"";
    }
    return size(unique);



}
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

        //vectors();
//    solution();
    //STL();
    cout << "\n\n"<<is_pallindrom(121);

    liczenie_unikalnych_znakow("aaaaa bbbb- cccc! -- d");
    set_unikalne_znaki("aaaaa bbbb- cccc! -- d");
    return 0;
}




