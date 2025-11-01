#include <iostream> 
using namespace std;
int san;
int deq;
int saat;
int main (){
    cout << "Saniye daxil edin: ";
    cin >> san;
    saat = san / 3600;
    deq = (san % 3600) / 60;
    san = (san % 3600) % 60;
    cout << saat << " saat " << deq << " deq " << san << " san ";
}