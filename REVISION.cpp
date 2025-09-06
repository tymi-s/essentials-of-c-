#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;


int* pointers(int* pointer){
    cout << "\nthis is a value of a variable "<< *pointer;
    return pointer;
}
int* display_array(int *array,int size){
    cout<<"\n\nDISPLAYING ARRAY\n";
    for (int i =0; i <size;i++){
        cout << array[i] << " ";
    }
    return array;
}
int* display_dynamic_array(int* dynamic_array,int size){
    cout<<"\n\nDISPLAYING ARRAY\n";
    for(int i =0; i <size; i++){
        cout << dynamic_array[i]<< " ";
    }
    return dynamic_array;
}

vector<int> display_vector(vector<int> vector1){
    cout<<"\n\nDISPLAYING VECTOR\n";
    for (int i =0;i<size(vector1);i++){
        cout<< vector1[i]<< " ";
    }
    return vector1;
}
vector<string> find_value_in_vector(vector<string> vec,string target){

    for (int i =0; i<size(vec);i++){
        if(vec[i].find(target)==0){
            cout << "\nznaleziono";
            return vec;

        }
        else{
            cout<< "\nnie znaleziono";
        }



    }
    return vec;
}

struct linked_list{
        int value;
        linked_list* next;
    };
void insert_to_list(linked_list*& head, int value){
        if (head == nullptr){
            linked_list* tmp = new linked_list;
            tmp->next = nullptr;
            tmp->value = value;
            head = tmp;
            return;
        }
    insert_to_list(head->next,value);
        return;
    }
void print_listt(linked_list*& head){
    if(head == nullptr){
        return;
    }
    cout << head->value<<"->";
    print_listt(head->next);

}
linked_list* meargin_sorted_lists(linked_list*& list1, linked_list*& list2){

    linked_list head;
    linked_list* tail = &head;

    while(list1 !=nullptr && list2 !=nullptr){

        if(list1->value <= list2->value){
            tail->next= list1;
            list1= list1->next;
        }
        if(list1->value > list2->value){
            tail->next = list2;
            list2= list2->next;
        }
        tail = tail->next;
    }
    if(list1 != nullptr){
        tail->next = list1;
    }
    if(list2 != nullptr){
        tail->next = list2;
    }
    return head.next;

}
linked_list* mearging(linked_list*& list1, linked_list*& list2){

    linked_list head;
    linked_list* tail = &head;

    while(list1 != nullptr && list2 != nullptr){
        if(list1->value >= list2->value){
            tail = list2;
            list2 = list2->next;
        }
        if(list1->value < list2->value){
            tail = list1;
            list1 = list1->next;
        }
        tail = tail->next;
    }
    if(list1 !=nullptr){
        tail->next = list1;
    }
    if(list2 != nullptr){
        tail->next = list2;
    }
    return head.next;
}

struct BST{
    int v;
    BST* left;
    BST* right;
};
void add_node(BST*& root,int value){

    if(root == nullptr){
        BST* tmp = new BST;
        tmp->left=nullptr;
        tmp->right=nullptr;
        tmp->v = value;
        root = tmp;
        return ;
    }
    if(value >= root->v){
        add_node(root->right,value);
    }
    if(value < root->v){
        add_node(root->left,value);
    }
}
void inorder(BST*& root){

    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout << root->v<<"->";
    inorder(root->right);
}
void postorder(BST*& root){

    if(root == nullptr){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->v<<"->";

}


void unikalne_znaki(string s){
    set<char> unique(s.begin(),s.end());

    cout<< endl <<s<<endl;
    for(auto x : unique){
        cout << x << " ";
    }
}
bool pal(int z){
    string s = to_string(z);
    string reversed = s;
    reverse(s.begin(),s.end());
    return s == reversed;
}
void binary_searchh(vector<int> table,int target){

    int left = 0;
    int right = size(table) -1;


    while (left<right){
        int mid = (left+right)/2;

        if(table[mid]<target){
            right = mid -1;
        }
        if(table[mid] > target){
            left= mid+1;
        }
        if(table[mid] == target){
            cout << "\nZNALEZNIONO!\n Indeks: ";
            return;
        }
    }
     cout << "\nZNALEZNIONO!\n Indeks: ";

}
void bin(vector<int> table, int target){

    int left =0;
    int right =size(table)-1;

    while(left<right){

        int mid = (left+right)/2;

        if(table[mid]< target){
            left = mid +1;
        }
        else if( table[mid]> target) {
            right = mid - 1;

        }
        else if (table[mid] == target){
            cout << "FOUND!";
            return;
        }
    }
    cout << "not found :(";

}

vector<int> NextGreatesElement( vector<int> tab){
    int n = size(tab);
    vector<int> res(n,-1);
    stack<int> s; // przechowuje indeksy

    for(int i =0; i <n; i ++ ){
        while(!s.empty() && tab[i] > tab[s.top()]){
            res[s.top()] = tab[i]; //ustawienie wyniku dla tego indeksu
            s.pop();
        }
        s.push(i);

    }
    return res;
}
vector<int> nge(vector<int> tab){

    int n = size(tab);
    vector<int> res(n,-1);
    stack<int> stack;

    for(int i =0; i < n;i++){
       while(!stack.empty() && tab[i]> tab[stack.top()]){
           res[stack.top()] = tab[i];
           stack.pop();



       }
       stack.push(i);
    }
    return res;

}

vector<int> x(vector<int> tab){
    int n = size(tab);
    vector<int> res(n,-1);
    stack<int> stack;

    for(int i =0; i<n;i++){

        while(!stack.empty()&& tab[i] > tab[stack.top()]){
            res[i] = tab[i];
            stack.pop();
        }

        stack.push(i);
    }
    return res;
}
void REVISION(){


    ///////////////////////////////////////    POINTERS     ////////////////////////////////////////////
    int variable1 = 15;
    int* pointer1 = &variable1;
    pointers(pointer1);

    int array[5] = {1,2,3,4,5};
    display_array(array,sizeof(array)/sizeof(array[0]));

    int s = 10;
    int* dynamic_array = new int[s]{1,3,5,7,11,0,0,0,0,0};
    display_dynamic_array(dynamic_array,s);

    delete[] dynamic_array;
    ///////////////////////////////////////    VECTORS     ////////////////////////////////////////////
    vector<int> new_vector(5,0);
    display_vector(new_vector);

    vector<string> sss(5,"string");
    find_value_in_vector(sss,"string");

    ///////////////////////////////////////    OOP     ////////////////////////////////////////////
    //standard class, constor,default constructor,destructor, geters,seters
    class Person{
    private:
        string name;
        int age;
    public:
        Person(){
            name = "None";
            age = 0;
        }
        Person(string name ,int age){
            name = name;
            age = age;
        }
        string get_name() const{
            return name;
        }
        void set_name(const string& n){
            name = n;
        }
        ~Person(){
            cout << "\ncalling a destructor";
        }
    };

    Person tymon("tymon",21);
    cout << tymon.get_name();
    tymon.set_name("new name");

    //inharitance:
    class Animal{
    public:
        void eat(){ cout<<"\neating";}
    };
    class Dog : public Animal{
    public:
        void bark(){ cout<< "\nwoof woof";}
    };

    Dog d;
    d.eat(); // odziedziczone!
    d.bark();

    // polimorfism - overloading czyli wiele definicji tej samej metody zależnie od jej argumentów.
    class c{
    public:
        void method(){ cout<< "first";}
        int method(int x){cout << "\noverloaded"; return x;};

    };
    c object;
    object.method();
    object.method(5);

    //////////////////////////////////// LISTA LINKOWANA ///////////////////////////////////////////////////

    cout << "\n\nLINKED LIST\n\n";
    linked_list* list = nullptr;
    insert_to_list(list,1);
    insert_to_list(list,3);
    insert_to_list(list,5);
    insert_to_list(list,7);
    print_listt(list);

    linked_list* list2  = nullptr;
    insert_to_list(list2,2);
    insert_to_list(list2,4);
    insert_to_list(list2,6);
    insert_to_list(list2,8);
    cout << "\n";
    print_listt(list2);

    cout << "\n\n";
    BST* tree = nullptr;
    add_node(tree,5);
    add_node(tree,15);
    add_node(tree,51);
    add_node(tree,1);
    add_node(tree,13);
    add_node(tree,4);
    add_node(tree,2);
    inorder(tree);
    cout << "\n\n";
    postorder(tree);


    string o = "dablju";
    unikalne_znaki(o);

    int table[5] = {1,2,3,4,5};
    int n =5;

    vector<int> tab = {1,3,5,7,11,13};
    vector<int> res =NextGreatesElement(tab);

    for(auto x : res){
        cout << x << " ";
    }


    //macierz sąsiedztwa:
    int nn=5;
    vector<vector<int>> graph(n,vector<int> (nn,0));


}


void add_to_grapf(vector<vector<int>> graph, int n, int m){
        graph[n][m] = 1;
        graph[m][n] = 1;

    }
void unikalne_znakii(string s){

    set<char> set2(s.begin(),s.end());

    for(auto x : set2){
        cout << x<< " ";
    }

}
bool czy_jest_polimorifzmem(int x){

    string y = to_string(x);
    string o = y;
    reverse(o.begin(),o.end());
    return o == y;
}
string longest_com_pref(vector<string> s){
    string prefix = s[0];

    for (int i =0; i < size(s); i++){
        if(s[i].find(prefix) !=0){
            prefix= prefix.substr(0,size(prefix)-1);
        }
    }
    while(prefix.empty()){
        return "";
    }
    return prefix;
}
void binary( vector<int> table,int target){

    int left =0;
    int right = size(table)-1;

    while(left<=right){

        int mid = (left+right)/2;

        if(table[mid]< target){
            left = mid+1;
        }
        if(table[mid]> target){
            right = mid -1;
        }
        if( table[mid] == target){
            cout << "WE FOUND IT!!";
        }

    }
    cout << "NOT FOUND";

}
vector<int> NextGreatesElem( vector<int> tab){

    int n = size(tab);
    stack<int> stack;
    vector<int> result(n,-1);

    for(int i=0; i<n;i++){
        while(!stack.empty() && tab[i] > tab[stack.top()]){
            result[i] =tab[i];
            stack.pop();
        }

        stack.push(i);
    }
    return result;
}

void unik_zn(string s){

    set<char> u(s.begin(),s.end());

    for(auto x : u){
        cout << x<<" ";
    }
}
bool polim(int x){
    string z = to_string(x);
    string var = z;
    reverse(var.begin(),var.end());
    return var == z;

}
string prefixx(vector<string> table){

    string prefix = table[0];

    for(int i=0; i < size(table);i++){
        while(table[i].find(prefix) != 0){
            prefix = prefix.substr(0,prefix.size()-1);


        }

    }
    if(prefix.empty()){
        return "";
    }
    return prefix;
}
void binary_searrrr(vector<int> table, int target){

    int left =0;
    int right =size(table)-1;

    while(left < right){
        int mid = (left+right)/2;

        if(table[mid] < target){
            left = mid+1;
        }
        if(table[mid]> target){
            right= mid =1;
        }
        if(table[mid] == target){
            cout << 'FOUND!';
            return;
        }

    }
    cout << "NOT FOUND!";
}
vector<int> next_great_element(vector<int> tab){

    int n = size(tab);
    vector<int> res(n,-1);
    stack<int> stack;

    for(int i=0; i<n; i++){

        while(!stack.empty() && tab[i]> tab[stack.top()]){
            res[stack.top()] = tab[i];
            stack.pop();

        }
        stack.push(i);


    }
}


string reverse_stringg(string s){

    vector<char> vector(size(s));

    for(int i =0; i <size(s);i++){
        vector[i] = s[i];
    }
    reverse(vector.begin(),vector.end());

    string z(vector.begin(),vector.end());
    return z;
}

linked_list* mearg(linked_list*& list1, linked_list*& list2){

    linked_list head;
    linked_list* tail = &head;

    while(list1 != nullptr && list2 != nullptr){

        if(list1->value > list2->value){
            tail = list2;
            list2->next;
        }
        if (list1->value < list2->value){
            tail = list1;
            list1->next;
        }
        tail = tail->next;

    }
     if(list1 != nullptr) {
         tail->next = list1;
     }
    else if( list2 != nullptr){
        tail->next = list2;
    }
    return head.next;




}


vector<int>next_element(vector<int> table){
    int n = size(table);
    vector<int> result(n,-1);
    stack<int> stack;

    for(int i =0; i <n; i++){
        while(!stack.empty() && table[i] > table[stack.top()]){
            result[stack.top()] = table[i];
            stack.pop();
        }
        stack.push(i);
    }
    //ale jestem sigmą
}