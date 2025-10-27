#include <iostream>
using namespace std;
int x;
int y;
int main (){
    cout << "Birinci ededi daxil edin: ";
    cin >> x;
    cout << "Ikinci ededi daxil edin: ";
    cin >> y;
    cout << "Cemi: " << x + y << endl;
    cout << "Ferqi: " << x - y << endl;
    cout << "Hasili: " << x * y << endl;
    if(y != 0){
        cout << "Nisbeti: " << x / y << endl;
    }
    else{
        cout << "Sifira bolmek olmaz" << endl;
    }
}