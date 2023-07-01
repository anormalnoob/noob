#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Division {
public:
    int a,b,c = 0;
    void input(int c,int d)
    {
        a=c;
        b=d;
    }
    void divide(int a,int b)
    {
        a = a*10;
        cout << "0.";
        for(int i=0;i<200;i++)
        {
        c = a/b;
        a = a%b*10;
        cout << c;
        if(a==0)
        {
            break;
        }
        }
    }
};

int main() {
    Division O1;
    int c,d;
    scanf("%d/%d",&c,&d);
    O1.input(c,d);
    O1.divide(O1.a,O1.b);
    return 0;
}
