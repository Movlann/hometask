#include <iostream>
using namespace std;
int a;
int b;
int s = 0;
int main(){
    cout << "Eded daxil edin: ";
    cin >> a;
    b = a;
    while(a > 0){
        s = s * 10 + a % 10;
        a = a / 10;
    }
    if(b == s){
        cout << "Palindromdur";
    }
    else{
        cout << "Palindrom deyil";
    }
}