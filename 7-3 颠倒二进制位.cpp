#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Binary {
public:
    char bin[1000];
    void scannum(){
        cin >> bin;
    }
    void reverse() {
        for(int i=strlen(bin)-1;i>=0;i--)
        {
            cout << bin[i];
        }
    }
};

int main() {
    Binary p1;
    p1.scannum();
    p1.reverse();
    return 0;
}
