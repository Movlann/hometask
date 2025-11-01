#include <iostream> 
using namespace std;
int a;
int b;
int main (){
    cout << "Birinci ededi daxil edin: ";
    cin >> a;
    cout << "Ikinci ededi daxil edin: ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Birinci eded: " << a << endl;
    cout << "Ikinci eded: " << b << endl;
}