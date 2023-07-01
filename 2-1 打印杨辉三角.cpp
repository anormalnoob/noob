#include <iostream>
using namespace std;
#include <stdio.h>
class tri {
    public:
    int str[100][100];
    int n,i,j;
    void scann(int n_n)
    {
        n=n_n;
    }
    void init(int n)
    {
        for(i=1;i<=n;i++)
        {
            str[i][1]=1;
            str[i][i]=1;
        }
    }
    void tridown(int n)
    {
        for(i=3;i<=n;i++)
        {
            for(j=2;j<=i;j++)
            {
                str[i][j]=str[i-1][j-1]+str[i-1][j];
            }
    }
    }
    void printtri(int n)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",str[i][j]);
            }
            printf("\n");
        }
    }
};

int main()
{
    tri tr1;
    int n_n;
    cin >> n_n;
    tr1.scann(n_n);
    tr1.init(tr1.n);
    tr1.tridown(tr1.n);
    tr1.printtri(tr1.n);
    return 0;
}
