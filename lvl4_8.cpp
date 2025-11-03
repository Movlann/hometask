#include <iostream>
#include <string>
using namespace std;
int n;
string b = "";
int main(){
    cout << "Eded daxil edin: ";
    cin >> n;
    while(n > 0){
        b = char('0' + n % 2) + b;
        n = n / 2;
    }
    cout << "Binary formasi: " << b;
}