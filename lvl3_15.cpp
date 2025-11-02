#include <iostream>
using namespace std;
int N;
int a;
int s = 0;
int i = 1;
int main(){
    cout << "Say daxil edin: ";
    cin >> N;
    while(i <= N){
        cout << "Eded daxil edin: ";
        cin >> a;
        s = s + a;
        i++;
    }
    cout << "Cem: " << s;
}