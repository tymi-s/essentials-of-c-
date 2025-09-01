#include <iostream>
using namespace std;
#include <math.h>
#include <cstdlib>
#include <ctime>
void print_array(float array[],int size){
    cout << "\n\ncalling print_aarray function:\n";
    for(int i = 0 ; i <size;i++){
        cout << array[i]<< " ";

    }
    cout << endl;
}
void print_dynamic_array(int array[],int size ){

    cout <<"\n\nPRINTING DYNAMIC ARRAY WITH A FUNCTION\n";
    for (int i =0;i < size;i++){
        cout<< array[i]<< " ";
    }

}

void deviding_array_elements(float* pointer,int size, float by){
    cout << "\ncalling deviding function\n";
    for (int i =0; i<size;i++){
        *(pointer+i) /=by;
        cout <<*(pointer+i)<<"   ";
    }

}
void arrays_modification(){
    cout << "===================================="<<"ARRAYS MODYFICATION"<<"===================================="<<endl;

    float newArray[15]= {0.1,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    float* arr_pointer= newArray;//pointer to a first element of array
    cout << *arr_pointer << endl;//prints first element of array

    //looping thorugh array:
    for(int i=0;i<size(newArray);i++){
        cout <<newArray[i]<< " ";
    }
    //looping thorugh array using pointer:
    float* pointer = newArray;
    cout << "\nlooping by using a pointer:"<<endl;
    for(int i =0;i<size(newArray);i++){
        cout<< *(pointer +i)<<" ";
    }

    cout << "add 2 to every element of array using pointer"<<endl;
    //add 2 to every element of array using pointer:
    for (int i =0; i <size(newArray); i++){
        *(pointer +i) = *(pointer+i) +2; // lub *(pointer +i) +=2;
        cout << *(pointer +i) << " ";
    }
    cout << "\npo modyfikacji:"<<endl;
    for (int i=0;i <size(newArray);i++){
        cout << *(pointer +i)<<" ";
    }
    ///USING ARRAYS IN FUNCTIONS
    print_array(newArray,size(newArray));
    float* array_pointer = newArray;
    deviding_array_elements(array_pointer,size(newArray),2);

    cout << "\n\n===================================="<<"DYNAMIC ARRAY"<<"===================================="<<endl;

    int n;

    cout << "Give a desired size of an array: ";
    cin >> n;

    int* dynamic = new int[n];
    cout << "\ndynamic array:\n";
    for (int i =0;i <n;i++){
        dynamic[i]=(rand()%13)-2;//zares od 0-12 ale przesuwamy w lewo o 2

    }
    print_dynamic_array(dynamic,n);


}

