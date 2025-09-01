#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void STL(){

/////////////////////////////////////STRING////////////////////////////////
// są różne użyteczne metody w C++ do operacji na stringach:
//
    string txt = "Hello World";
    string hi = "World";
    cout << txt.size()<< endl;// zwraca rozmiar zmiennej
    cout << txt.empty() << endl; // zwraca BOOL. sprawdza czy jest pusty
    cout << txt.substr(0,5)<<endl;// zwraca wycinek stringa
    cout << txt.find(hi)<<endl;// zwraca indeks w którym zaczyna się podciąg, jesli go nie ma to zwraca 1
    cout << txt.replace(0,5,"HI"); // zamienia zakres ciągu znaków na wybrany ciąg znaków



    //reversing string:
    string t = "kajaK";
    vector<char> target;

    for (int i =0; i < size(t);i++){
        target.push_back(t[i]);

    }
    cout<<"\n\nAFTER REVERSING\n";
    reverse(target.begin(),target.end());
    string reversed(target.begin(),target.end());
    cout <<"REVERSED STRING: "<<reversed<<endl;
    for (int i =0; i < size(target);i++){
        cout<< target[i];

    }
    /////////////////////////////////////STL algorythms////////////////////////////////
    /// SORT:
    //złożoność: O(n log n )
    // służy do sortowania WEKTORÓW I DYNAMICZNYCH TABLIC i STRINGÓW
    cout << "\nSORTING VECTOR\n";
    vector<int> vec = {9,7,2,6,7,1,7,12};
    sort(vec.begin(),vec.end());
    for(int i =0; i< vec.size();i++){

        cout << vec[i]<<" ";
    }
    cout << "\nSORTING DYNAMIC ARRAY\n";
    int* tablee = new int[7] {1,7,5,2,7,9,2,};
    sort(tablee,tablee+7);
     for(int i =0; i< 7;i++){

        cout << tablee[i]<<" ";
    }
    cout << "\nSORTING STRING\n";
     string o = "Brick By brick";
     sort(o.begin(),o.end());
     for (int i =0; i <size(o);i++){
         cout << o[i];
     }

}