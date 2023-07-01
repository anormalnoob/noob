#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Strstr {
public:
    char a[999],b[999];
    int flag=1;
    int count=0;
    void mystrstr(char a[], char b[])
    {
        for(int i=0;i<strlen(a);i++)
        {
            flag=1;
            for(int j=0;j<strlen(b);j++)
            {
                if(a[i+j]!=b[j])
                {
                    flag=0;
                }
            }
            if(flag==1)
            {
                count++;
                cout << i << endl;
                break;
            }
        }
        if(count==0)
        {
            cout << -1 << endl;
        }
    }

};

int main() {
    Strstr str;
    char a[999],b[999];
    cin >> a; 
    cin >> b;
    str.mystrstr(a,b);
    return 0;
}
