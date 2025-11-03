#include <iostream>
using namespace std;
int main(){
    double a,b;
    char x;
    cin >> a >> x >> b;
    switch(x){
        case '+': 
        cout << a + b;
        break;
        case '-':
        cout << a - b;
        break;
        case '*':
        cout << a * b;
        break;
        case '/':
        cout << a / b;
        break;
    }
}