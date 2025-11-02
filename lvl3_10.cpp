#include <iostream>
using namespace std;
int a = 1;
int b = 1;
int c;
int N;
int s = 0;
int main(){
    cout << "Eded daxil edin: ";
    cin >> N;
    cout << a << " ";
    cout << b << " ";
    while(s < N - 2){
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
        s = s + 1;
    }
}