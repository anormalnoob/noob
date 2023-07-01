#include <iostream>
using namespace std;
#include <stdio.h>
class Oct {
    public:
    int dec,i,j,b=0;
    int digit[100]={0};
    void scana(int n)
    {
        dec=n;
    }
    void scanb(int m)
    {
        b=m;
    }
    void cal(int dec)
    {
        while(dec>b-1)
        {
            digit[i]=dec%b;
            dec=dec/b;
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
    int n,m;
    cin >> n >> m;
    oc1.scana(n);
    oc1.scanb(m);
    oc1.cal(oc1.dec);
    return 0;
}
