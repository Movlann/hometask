#include <iostream>
using namespace std;
int main (){
    int a;
    int i;
    cout << "Eded daxil edin: ";
    cin >> a;
    for(i = 1; i <= a; i++){
        if(a % i == 0){
            cout << i << endl;
        }
    }
}