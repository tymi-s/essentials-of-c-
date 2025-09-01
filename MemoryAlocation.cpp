#include <iostream>
using namespace std;
#include <math.h>
void MemoryAlocation(){


    /*11112345678
     * Typy pamięci w C++:
     * STOS (stack) - pamięć automatyczna (statyczna) np.:
     * int x[2]={1,2}; - statyczna tablica na stosie
     *
     * STERTA (heap) - pamięć dynamiczna tworzona przez słowa kluczowe new, new[] i przy tworzeniu wektorów
     * int* table = new int[n]; - dynamiczna tablica na stercie
     *
     * trzeba zwolnić pamięć albo będzie jej wyciek chyba że używamy wektorów.
     * delete[] table;
     * */

    ///alokacja pamięci następuje gdy tworzymy obiekty dynamiczne

    cout<<"daj rozmiar do alokacji: "<<endl;
    int size;
    cin >> size;

    int* table = new int[size];

    for (int i =0; i <size;i++){
        table[i] = i;
        cout<< table[i] << " ";
    }

}