#include <iostream>
using namespace std;
#include <stdio.h>
#include <iomanip>
#include <math.h>
class Time {
    public:
    int bjt,utc=0;
    int calutc(int bjt)
    {
        if(bjt<800)
        {
            bjt=bjt+2400;
            utc=bjt-800;
        }
        else{
            utc=bjt-800;
        }
        return utc;
    }
};

int main()
{
    Time t1;
    cin >> t1.bjt;
    cout << t1.calutc(t1.bjt) << " " << endl;
    return 0;
}
