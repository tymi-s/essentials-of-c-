#include <iostream>
using namespace std;
#include <math.h>
void pointer_in_function(float* p){
    cout <<"pointer in function: "<< *p << endl;
}
void multiply_by_2(float* p){
    *p *=2;
    cout <<"after multiplying by 2: "<< *p << endl;
}

void ret_sqrt_of_number(float*p){
    *p= sqrt(*p);
    cout << "sqrt: "<< *p<<endl;
}
void pointers(){

    cout << "===================================="<<"POINTERS"<<"===================================="<<endl;
    float x = 25;
    float* pointer = &x;
    cout << pointer <<endl;//returns address
    pointer_in_function(pointer);


    //function that multiplies by 2:
    multiply_by_2(pointer);
    cout <<"modified x: " <<x <<endl;

    ret_sqrt_of_number(pointer);
    cout <<"modified x: " <<x <<endl;


    ///ARRAY POINTERS:
    /// MOŻNA PRZESYŁAĆ TABLICE DO FUNKCJI I DZIAŁAĆ NA ORYGINALE A NIE NA KOPII!
    float array[5] = {1, 2, 3, 4, 5};
    float* arr_pointer= array;
    cout << *arr_pointer+3.14; //zwraca 4 bo dodaje do pierwszego elementu 3






}