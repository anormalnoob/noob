#include <stdio.h>
#include <iostream>
using namespace std;

class Sort{
    public:
    int num[1000]={0};
    int n;
    void ScanSor(int x[],int y)
    {
        n=y;
        for(int i=0;i<n;i++)
        {
            num[i]=x[i];
        }
    }
    int sort(int a[],int n)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        return 0;
    }
};

int main()
{
    int x[1000]={0};
    int y=0;
    cin >> y;
    for(int i=0;i<y;i++)
    {
        cin >> x[i];
    }
    Sort sor;
    sor.ScanSor(x,y);
    sor.sort(sor.num,sor.n);
    return 0;
}
