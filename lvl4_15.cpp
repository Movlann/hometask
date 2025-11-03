#include <iostream>
using namespace std;
int a;
int b;
int maks;
int main(){
    cout << "Eded daxil edin: ";
    cin >> a;
    maks = a;
    while(a != 0){
        b = maks;
        cout << "Eded daxil edin: ";
        cin >> a;
        if(b > a){
            maks = b;
        }
        else{
            maks = a;
        }
    }
    cout << "En boyuk eded: " << maks;
}