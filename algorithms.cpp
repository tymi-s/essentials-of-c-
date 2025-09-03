#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


struct BST{
    BST* lewo;
    BST* prawo;
    int wartosc;
};
BST* nowy_wezel(BST*& korzen,int w){


    if(korzen == nullptr){
        BST* tmp = new BST;
        tmp->wartosc = w;
        tmp->lewo = nullptr;
        tmp->prawo = nullptr;
        korzen= tmp;
        return korzen;
    }
    if( korzen->wartosc> w){
        nowy_wezel(korzen->lewo,w);
    }
    if(korzen->wartosc <= w){
        nowy_wezel(korzen->prawo,w);
    }
    return korzen;
}
BST* finding_value(BST*& korzen,int value){

    if(korzen == nullptr){
        cout<<"\nnie ma tej liczby w tym drzewie BST\n";
        return nullptr;

    }
    if(korzen->wartosc == value) {
        cout << "\nznaleziono liczbe " << korzen->wartosc << " w tym drzewie BST!\n";
        return korzen;

    }
    if(korzen->wartosc> value){
        finding_value(korzen->lewo,value);
    }
    if(korzen->wartosc<=value){
        finding_value(korzen->prawo,value);
    }
    return korzen;



}

int liczenie_unikalnych_znakow(string string1) {
    cout << "\nSTRING:   " << string1;

    vector<char> vec;

    for (int i = 0; i < size(string1); i++) {
        bool found = false;
        for (int j = 0; j < size(vec); j++) {
            if (vec[j] == string1[i]) {
                found = true;
                break;
            }

        }
        if (!found) {
            vec.push_back(string1[i]);
        }
    }
    cout << "\nUNIKE CHARACTERS:\n";
    for (int i = 0; i < size(vec); i++) {
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
int binary_search(vector<int> table,int target){
    int left = 0;
    int right = size(table)-1;

    while(left<right){

        int mid = (left+right)/2;

        if(target<table[mid]){
            right=mid-1;
        }
        else if(target>table[mid]){
            left = mid+1;
        }
        else if(target == table[mid]) {
            cout << "\nZNALEZNIONO!\n Indeks: ";
            return mid;
        }

    }
    cout << "\nNIE ZNALEZNIONO!\n";
    return -1;
}
void algorithms(){
//    liczenie_unikalnych_znakow("aaaaa bbbb- cccc! -- d");
//    set_unikalne_znaki("aaaaa bbbb- cccc! -- d");
//    cout << "\n\n"<<is_pallindrom(121);
//    vector<int> z={1,3,5,7,11,13,17,19,23};
//    cout << binary_search(z,17);
    BST* korzen = nullptr;
    nowy_wezel(korzen,5);
    nowy_wezel(korzen,1);
    nowy_wezel(korzen,15);
    nowy_wezel(korzen,12);
    nowy_wezel(korzen,7);
    nowy_wezel(korzen,100);
    finding_value(korzen,13);




}












