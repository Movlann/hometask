#include <iostream>
using namespace std;
int x;
int y;
int z;
int main (){
    cout << "Birinci ededi daxil edin: ";
    cin >> x;
    cout << "Ikinci ededi daxil edin: ";
    cin >> y;
    cout << "Ucuncu ededi daxil edin: ";
    cin >> z;
    if(x > y){
        if(x > z){
            cout << x;
        }
    }
    else if(y > x){
        if(y > z){
            cout << y;
        }
    }
    else{
        cout << z;
    }
}