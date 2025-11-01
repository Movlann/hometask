#include <iostream>
using namespace std;
int x;
int main (){
    cout << "Eded daxil edin: ";
    cin >> x;
    if(x > 0){
       if(x % 2 == 0){
          cout << "Eded cutdur";
       }
       else{
          cout << "Eded tekdir";
       }
    }
    else{
        cout << "Duzgun eded daxil edin";
    }
}