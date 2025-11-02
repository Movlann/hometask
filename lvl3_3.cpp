#include <iostream>
using namespace std;
int s = 0;
int i = 1;
int main(){
    while(i<=100){
        s = s + i;
        i++;
    }
    cout << "Cem: " << s;
}