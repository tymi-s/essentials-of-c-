#include <vector>
#include <iostream>
#include <string>
using namespace std;
#include <algorithm>

void print_vector(vector<int> v){

    cout <<"\n\n printing vector\n\n";
    for (int i =0; i < size(v);i++){
        cout << v[i]<< " ";
    }

}
void vectors(){

    // wektory to dynamiczne tablice w C++
    // sam wektor jest przechowywany na stosie ale jego elementy są na stercie bo są dynamiczne
    // trzeba biblioteki <vector>


    vector<int> v;
    vector<double> d(5,1); // first parameter means a size of vector, second inputs a value in all places
    for (int i =0; i <size(d);i++){
        cout<< d[i]<<" ";
    }
    int s;
    cout << "\n\nINPUT SIZE OF A VECTOR: ";
    cin >> s;

    for (int i =0; i<s;i++){
        v.push_back(i);
        cout << v[i] << " ";
    }

//methods for vectors:
///*
///
///v.push_back(5);    // dodanie na końcu
///v.pop_back();      // usunięcie ostatniego
///v.size();          // liczba elementów
///v.empty();         // true, jeśli wektor pusty
///v.clear();          //czyści
///
/// *///

cout <<"\n\n===========================check if value is in vector ===========================\n\n";

    double guess;
    int result = 0;
    vector<double> random(10);
    for (int i =0; i< size(random); i++){
        random[i] = rand() %11;
    }
    cout<<"guess the value: ";
    cin >>guess;

    for (int i =0; i <random.size();i++){
        if(guess ==random.at(i) ){
            cout << "The value was found :)\n";
            result = 1;
        }

    }
    if (result == 0){
        cout << "The value was not  found :(\n";
    }
    for(int i =0; i < size(random);i++){
        cout << random[i]<<" ";
    }

    vector<int> mega = {1,3,5,7,12};
    print_vector(mega);


    //usuwanie elementów o danym indeksie z wektora:
    int choice;
    vector<string> l={"Man","woman","new"};

    cout<< "\n\n";

     for(int i =0; i <size(l);i++){
        cout << l[i]<< " ";
    }
    cout<<"\nwhich index you want to remove?: ";
    cin>> choice;

    l.erase(l.begin()+choice);
    for(int i =0; i <size(l);i++){
        cout << l[i]<< " ";
    }

}
//zwracanie wektora:
vector<int> function(vector<int> to_print){
    return to_print;
}



