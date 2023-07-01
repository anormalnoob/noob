#include <iostream>
using namespace std;
#include <stdio.h>
class Circle {
    public:
    float r,d,c,s=0;
    float cald(float r){
        d=2*r;
        return d;
    }
    float calc(float r){
        c=6.28*r;
        return c;
    }
    float cals(float r){
        s=3.14*r*r;
        return s;
    }
   
};

int main()
{
    Circle cir1;
    float r;
    cin >> r;
    cout << "直径=" << cir1.cald(r) << endl;
    cout << "周长=" << cir1.calc(r) << endl;
    cout << "面积=" << cir1.cals(r) << endl;
    return 0;
}
