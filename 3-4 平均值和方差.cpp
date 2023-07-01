#include <iostream>
using namespace std;
#include <stdio.h>
#include <iomanip>
#include <math.h>
class Num {
    public:
    float avr, dir=0;
    float calavr(int n[]){
        avr=n[0]+n[1]+n[2]+n[3]+n[4]+n[5];
        avr=avr/6;
        return avr;
    }
    float caldir(int n[]){
        avr=n[0]+n[1]+n[2]+n[3]+n[4]+n[5];
        avr=avr/6;
        dir=pow(n[0]-avr,2)+pow(n[1]-avr,2)+pow(n[2]-avr,2)+pow(n[3]-avr,2)+pow(n[4]-avr,2)+pow(n[5]-avr,2);
        dir=dir/6;
        return dir;
    }
    int n[6]={0};
};

int main()
{
    Num num1;
    cin >> num1.n[0] >> num1.n[1] >> num1.n[2]>> num1.n[3]>> num1.n[4]>> num1.n[5];
    cout << fixed << setprecision(2) << num1.calavr(num1.n) << " " << num1.caldir(num1.n) << endl;
    return 0;
}
