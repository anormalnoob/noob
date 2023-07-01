#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Sort{
    public:
    int num[7];
    void scanNum(string s1)
    {
        for(int i=0;i<7;i++)
        {
            num[i]=s1[i]-64;
        }
    }
    void showNum(int num[])
    {
        for (int i=0;i<7;i++){
        if(num[i]>=1&&num[i]<=3)
        {
            cout << '2';
        }
        if(num[i]>=4&&num[i]<=6)
        {
            cout << '3';
        }
        if(num[i]>=7&&num[i]<=9)
        {
            cout << '4';
        }
        if(num[i]>=10&&num[i]<=12)
        {
            cout << '5';
        }
        if(num[i]>=13&&num[i]<=15)
        {
            cout << '6';
        }
        if(num[i]>=16&&num[i]<=19)
        {
            cout << '7';
        }
        if(num[i]>=20&&num[i]<=22)
        {
            cout << '8';
        }
        if(num[i]>=23&&num[i]<=26)
        {
            cout << '9';
        }
        }
    }
    
};

int main()
{
    Sort sor;
    string str;
    cin >> str;
    sor.scanNum(str);
    sor.showNum(sor.num);
    return 0;
}
