#include <iostream>
using namespace std;
int x;
int main (){
    cout << "Eded daxil edin: ";
    cin >> x;
    if(x > 0){
        cout << "Eded musbetdir";
    }
    else if(x < 0){
        cout << "Eded menfidir";
    }
    else{
        cout << "Eded sifirdir";
    }
}