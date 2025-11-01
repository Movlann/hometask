#include <iostream>
using namespace std;
int bal;
int main (){
    cout << "Bal daxil edin: ";
    cin >> bal;
    if(bal >= 0 && bal <= 50){
        cout << "F";
    }
    else if(bal > 50 && bal <= 60){
        cout << "E";
    }
    else if(bal > 60 && bal <= 70){
        cout << "D";
    }
    else if(bal > 70 && bal <= 80){
        cout << "C";
    }
    else if(bal > 80 && bal <= 90){
        cout << "B";
    }
    else if(bal > 90 && bal <= 100){
        cout << "A";
    }
    else{
        cout << "Duzgun eded daxil edin";
    }
}