#include <iostream>
using namespace std;

class Matrix {
private:
    int m,n;
public:
    int a,b;
    int flag=1;
    void FindS(int a,int b)
    {
        for(int i=a;i<=b;i++)
        {
            flag=1;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=0;
                }
            }
            if(flag==1)
            {
                int d1,d2,d3,sum,product,s2=0;
                d1=i/100;
                d2=(i%100)/10;
                d3=i%10;
                sum=d1+d2+d3;
                product=d1*d2*d3;
                s2=d1*d1+d2*d2+d3*d3;
                for(int k=2;k<sum;k++)
                {
                    if(sum%k==0)
                    {
                        flag=0;
                    }
                }
                for(int k=2;k<product;k++)
                {
                    if(product%k==0)
                    {
                        flag=0;
                    }
                }
                for(int k=2;k<s2;k++)
                {
                    if(s2%k==0)
                    {
                        flag=0;
                    }
                }
                if(flag==1)
                {
                    cout << i << " ";
                }
            }
        }
    }
};

int main() {
    int m,n;
    cin >> m >> n;
    Matrix as;
    as.FindS(m,n);
    return 0;
}
