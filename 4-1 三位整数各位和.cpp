#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;

class Re {
public:
    int a,d1,d2,d3,sum;
    void show(int a)
    {
        d1=a/100;
        d2=(a-100*d1)/10;
        d3=a%10;
        sum=d1+d2+d3;
        cout << sum << endl;
    }
};

int main() {
    Re t1;
    int a;
    cin >> t1.a;
    t1.show(t1.a);
    return 0;
}
