#include <iostream>
using namespace std;
int ay;
int main(){
    cout << "Ay nomresi daxil edin: ";
    cin >> ay;
    if(ay == 3 || ay == 4 || ay == 5){
        cout << "Yaz";
    }
    else if(ay == 6 || ay == 7 || ay == 8){
        cout << "Yay";
    }
    else if(ay == 9 || ay == 10 || ay == 11){
        cout << "Payiz";
    }
    else if(ay == 12 || ay == 1 || ay == 2){
        cout << "Qis";
    }
    else{
        cout << "Duzgun nomre daxil edin";
    }
}