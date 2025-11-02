#include <iostream>
using namespace std;
int x;
int a;
int s = 0;
int main(){
    cout << "Eded daxil edin: ";
    cin >> x;
    while(x > 0){
        a = x % 10;
        s = s + a;
        x = x / 10;
    }
    cout << "Cem: " << s;
}