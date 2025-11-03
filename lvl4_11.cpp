#include <iostream>
using namespace std;
int a = 0;
int b = 1;
int c;
int main(){
    while(b < 1000){
        cout << b << "" << endl;
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}