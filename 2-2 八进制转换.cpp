#include <iostream>
using namespace std;
#include <stdio.h>
class Oct {
    public:
    int dec,i,j=0;
    int digit[100]={0,0,0,0,0};
    void scann(int n)
    {
        dec=n;
    }
    void cal(int dec)
    {
        while(dec>7)
        {
            digit[i]=dec%8;
            dec=dec/8;
            i++;
        }
        printf("%d",dec);
        for(j=i-1;j>=0;j--)
        {
            printf("%d",digit[j]);
        }
        printf("\n");
    }
   
};

int main()
{
    Oct oc1;
    int n;
    cin >> n;
    oc1.scann(n);
    oc1.cal(oc1.dec);
    return 0;
}
