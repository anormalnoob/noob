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
    void cal9(int dec)
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
    void cal11(int dec)
    {
        while(dec>b-1)
        {
            digit[i]=dec%b;
            dec=dec/b;
            i++;
        }
        digit[i]=dec;
        for(j=i;j>=0;j--)
        {
            if (digit[j]<10){
            printf("%d",digit[j]);
            }
            else{
                if (digit[j]==10){
                    printf("A");
                }
                if (digit[j]==11){
                    printf("B");
                }
                if (digit[j]==12){
                    printf("C");
                }
                if (digit[j]==13){
                    printf("D");
                }
                if (digit[j]==14){
                    printf("E");
                }
                if (digit[j]==15){
                    printf("F");
                }
            }
            
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
    if(m<10){
    oc1.cal9(oc1.dec);
    }
    else
    oc1.cal11(oc1.dec);
    return 0;
}
