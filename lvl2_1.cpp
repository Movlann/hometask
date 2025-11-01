#include <iostream>
using namespace std;
int x;
int y;
int main (){
    cout << "Birinci ededi daxil edin: ";
    cin >> x;
    cout << "Ikinci ededi daxil edin: ";
    cin >> y;
    if(x > y){
        cout << x;
    }
    else{
        cout << y;
    }
}