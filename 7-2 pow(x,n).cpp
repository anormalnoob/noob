#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Pow {
public:
    int x,n;
    char dot;
    void scannum(){
        cin >> x >> dot >> n;
    }
    void pow() {
        int x0=x;
        for(int i=0;i<n-1;i++){
            x=x*x0;
        }
        cout << x;
    }

};

int main() {
    Pow p1;
    p1.scannum();
    p1.pow();
    return 0;
}
