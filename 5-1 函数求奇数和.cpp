#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Odd {
public:
    int a[99]={0};
    int count = 0;
    int sum , flag = 0;
    void input()
    {
        while(flag<1){
            scanf("%d",&a[count]);
            if(a[count]<1){
                a[count]=0;
                flag=1;
        }
        count++;
        }

    }
    int even(int n)
    {
        if (n%2==0)
        {
        return 1;
        }
        else
        return 0;
    }
   int add(int a[])
   {
        sum = 0;
        for (int i=0;i<count-1;i++){
        if(even(a[i])==0)
        {
            sum = sum + a[i];
        }
        }
        cout << sum << endl;
        return 0;
   }

};

int main() {
    Odd O1;
    O1.input();
    O1.add(O1.a);
    return 0;
}
