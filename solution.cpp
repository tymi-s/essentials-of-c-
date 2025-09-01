#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
void solution(){


    string s = "new-room -- gsodf jds-  sdfo";
    vector<char> n;
    for (int i =0 ; i<size(s);i++){

        if(s[i] != '-' && s[i] != ' '){
            n.push_back(s[i]);
        }
    }

    for (int i=0; i< size(n);i++){
        cout << n[i];
    }
    vector<char> result;
    int counter =0;

    for (int i = 0; i<size(n);i++ ){
        if(counter %3  == 0&& counter!=0) {
            result.push_back(' ');
            result.push_back(n[i]);

            counter ++;
        }
        else{
            result.push_back(n[i]);
            counter++;
        }
    }
    cout << endl;
     for (int i=0; i< size(result);i++){
        cout << result[i];
    }

     cout << "\n\n as a table:\n\n";
     //spakowanie wektora do tablicy
     char* table = new char[size(result)];
     for (int i =0; i < size(result);i++){

         table[i] = result[i];
         cout<< table[i];

     }

}

string longest_common_prefix(vector<string>& input){
    string prefix = input[0];
    for (int i =0;i < size(input);i++){
        while(input[i].find(prefix) !=0){//jesli nie znajdzie
            prefix = prefix.substr(0,size(prefix)-1);
        }
        if( prefix.empty()){
            return "";
        }
    }
    return prefix;
}






bool is_pal(int x){
    string check = to_string(x);
    string reversed = check;
    reverse(reversed.begin(),reversed.end());
    return check == reversed;
}




