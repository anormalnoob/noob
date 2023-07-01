#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Multi {
public:
    int a[101],b[101] = {0};
    int count = 0;
    void input()
    {                
        int zero=0;
        for(int i=0;i<999;i++)
        {
            cin >> a[i] >> b[i];
            if(a[i]==0)
            {
                zero++;
                if(zero==2)
                {
                count=i;
                break;
                }
            }
        }
    }
    void bubbleSorta(int a[],int b[])
    {
        int temp;
        for(int i=0;i<count;i++)
        {
            for(int j=i;j<count;j++)
            {
                if(a[j]>a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    temp=b[j];
                    b[j]=b[i];
                    b[i]=temp;
                }
            }
        }
    }
    void output(int a[],int b[])
    {
        for(int i=0;i<=count;i++)
        {
            for(int j=0;j<=count;j++)
            {
                if(a[i]==a[j]&&i!=j)
                {
                    b[i]=b[i]+b[j];
                    a[j]=-1;
                }
            }
        }
        for(int i=0;i<count;i++)
        {
            if(a[i]>1)
            {
                if(b[i+1]!=0)
                {
                cout << b[i] << "x" << a[i] << "+";
                }
                
            }
            if(a[i]==1)
            {
                if(b[i+1]!=0){
                cout << b[i] << "x" << "+";
                }
                if(b[i+1]==0){
                cout << b[i] << "x" << endl;
                }
            }
            if(a[i]==0)
            {
                cout << b[i] << endl;
            }  
            if(a[i+1]==0&&b[i+1]==0&&a[i]>1)
            {
                cout << b[i] << "x" << a[i] << endl;
            }
        }

    }
};

int main() {
    Multi O1;
    O1.input();
    O1.bubbleSorta(O1.a,O1.b);
    O1.output(O1.a,O1.b);
    return 0;
}
