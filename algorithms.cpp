#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

///////////////////////////////////////////////// LINKED LIST //////////////////////////////////////////////////////////////////////////

struct linked_list{
    linked_list* next;
    int value;


};
linked_list* nowy_element_listy(linked_list*& head,int value){

    if(head == nullptr){
        linked_list* tmp = new linked_list;

        tmp->next = nullptr;
        tmp->value = value;
        head = tmp;
        return head;
    }
    nowy_element_listy(head->next,value);
    return head;

}
void print_list(linked_list*& head){

    if(head == nullptr){
        cout <<"\n";
        return;
    }
    cout<< head->value << "->";
    print_list(head->next);
}
linked_list* merging_sorted_lists(linked_list*& list1,linked_list*& list2){
    linked_list tmp;
    linked_list* tail = &tmp;
    tmp.next == nullptr;
    while(list1 != nullptr && list2 != nullptr){
        if(list1->value >= list2->value){
            tail->next = list1;
            list1= list1->next;
        }
        else{
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if(list1 != nullptr){
        tail->next = list1;
    }
    else{
        tail->next = list2;
    }
    return tmp.next;
}
///////////////////////////////////////////////// BST TREE //////////////////////////////////////////////////////////////////////////
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
void print_inorder(BST*& korzen){

    if(korzen == nullptr) return ;

    print_inorder(korzen->lewo);
    cout<< korzen->wartosc<<"->";
    print_inorder(korzen->prawo);
}
///////////////////////////////////////////////// OTHER ALGORITHMS //////////////////////////////////////////////////////////////////////////
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

///////////////////////////////////////////////// MAIN //////////////////////////////////////////////////////////////////////////
void algorithms(){

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    liczenie_unikalnych_znakow("aaaaa bbbb- cccc! -- d");
//    set_unikalne_znaki("aaaaa bbbb- cccc! -- d");
//    cout << "\n\n"<<is_pallindrom(121);
//    vector<int> z={1,3,5,7,11,13,17,19,23};
//    cout << binary_search(z,17);
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//    BST* korzen = nullptr;
//    nowy_wezel(korzen,5);
//    nowy_wezel(korzen,1);
//    nowy_wezel(korzen,15);
//    nowy_wezel(korzen,12);
//    nowy_wezel(korzen,7);
//    nowy_wezel(korzen,100);
//    finding_value(korzen,13);
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    linked_list* list = nullptr;
    nowy_element_listy(list,1);
    nowy_element_listy(list,3);
    nowy_element_listy(list,17);
    nowy_element_listy(list,13);
    nowy_element_listy(list,23);
    print_list(list);


    delete list;
//    delete korzen;

}














