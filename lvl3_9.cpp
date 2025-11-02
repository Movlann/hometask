#include <iostream>
using namespace std;
int a;
int i = 2;
int s = 0;
int main(){
    cout << "Eded daxil edin: ";
    cin >> a;
    for(i;i <= a;i++){
        if(a % i == 0){
            s = s + 1;
        }
    }
    if(s == 1){
        cout << "Eded sadedir";
    }
    else{
        cout << "Eded sade deyil";
    }
}