#include <iostream>
using namespace std;
int a;
int s = 0;
int main(){
    cout << "Eded daxil edin: ";
    cin >> a;
    while(a != 0){
        s = s + a;
        cout << "Eded daxil edin: ";
        cin >> a;
    }
    cout << "Cem: " << s;
}