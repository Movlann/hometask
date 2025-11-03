#include <iostream>
using namespace std;
int N;
int s = 0;
int a;
int maks;
int mini;
int main(){
    cout << "Say daxil edin: ";
    cin >> N;
    cout << "Eded daxil edin: ";
    cin >> a;
    maks = a;
    mini = a;
    s = s + a;
    for(int i = 1;i < N;i++){
        cout << "Eded daxil edin: ";
        cin >> a;
        s = s + a;
        if(a > maks){
            maks = a;
        }
        if(a < mini){
            mini = a;
        }
    }
    double eo = s / N;
    cout << "En boyuk: " << maks << endl;
    cout << "En kicik: " << mini << endl;
    cout << "Orta qiymet: " << eo << endl;
}