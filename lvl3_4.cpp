#include <iostream>
using namespace std;
int a;
int i = 1;
int p = 1;
int main(){
    cout << "Eded daxil edin: ";
    cin >> a;
    while(i <= a){
        p = p * i;
        i++;
    }
    cout << "Faktorial: " << p;
}