#include <iostream>
using namespace std;
double x;
double y;
double z;
int main (){
    cout << "Birinci ededi daxil edin: ";
    cin >> x;
    cout << "Ikinci ededi daxil edin: ";
    cin >> y;
    cout << "Ucuncu ededi daxil edin: ";
    cin >> z;
    cout << "Ededi orta: " << (x + y + z) / 3;
}