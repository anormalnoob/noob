#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Odd {
public:
    int a,b = 0;
    void input(int c,int d)
    {
        a=c;
        b=d;
    }
    void finda(int a,int b)
    {
        int result = 0;
        for(int i=2;i<999999;i++)
        {
            if(a%i == 0 && b%i == 0)
            {
                result=i;
                break;
            }
        }
        cout << result << endl;
    }
    void findb(int a,int b)
    {
        int result = 0;
        for(int i=a;i<999999;i++)
        {
            if(i%a == 0 && i%b == 0)
            {
                result=i;
                break;
            }
        }
        cout << result << endl;
    }


};

int main() {
    Odd O1;
    int c,d;
    cin >> c >> d;
    O1.input(c,d);
    O1.finda(O1.a,O1.b);
    O1.findb(O1.a,O1.b);
    return 0;
}
