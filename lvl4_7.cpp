#include <iostream>
using namespace std;
int a;
int r;
int b;
int s = 0;
int main(){
    cout << "Eded daxil edin: ";
    cin >> a;
    b = a;
    while(a > 0){
        r = a % 10;
        s = s + r*r*r;
        a = a / 10;
    }
    if(s == b){
        cout << "Armstronq ededdir";
    }
    else{
        cout << "Armstronq eded deyil";
    }
}