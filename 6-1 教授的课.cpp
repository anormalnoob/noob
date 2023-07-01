#include <stdio.h>
#include <iostream>
using namespace std;

class Student{
    public:
    int a[1000]={0};
    int n,k;
    void ScanStu(int x[],int y,int z)
    {
        n=y;
        k=z;
        for(int i=0;i<n;i++)
        {
            a[i]=x[i];
        }
    }
    int isCancel(int a[],int n,int k)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=0)
            {
                count++;
            }
        }
        if(count<k)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        return 0;
    }
};

int main()
{
    int x[1000]={0};
    int y,z=0;
    cin >> y >> z;
    for(int i=0;i<y;i++)
    {
        cin >> x[i];
    }
    Student stu;
    stu.ScanStu(x,y,z);
    stu.isCancel(stu.a,stu.n,stu.k);
    return 0;
}
