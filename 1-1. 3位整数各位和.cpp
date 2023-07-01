
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int a , a1 , a2 , a3 , sum= 0 ;
    cin >> a ;
    a1 = a/100;
    a2 = (a - a/100*100) /10;
    a3 = a - a1*100 - a2*10;
    sum = a1 + a2 + a3;
    cout << sum << endl;
}
