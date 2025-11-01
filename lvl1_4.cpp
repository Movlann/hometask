#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14;
int r;
int main(){
    cout << "Radius daxil edin: ";
    cin >> r;
    cout << "Sahe: " << PI * (r * r) << endl;
    cout << "Cevrenin uzunlugu: " << 2 * PI * r << endl;
}