#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;

class Age {
public:
    int a;
    void show(int a){
        int val;
        if (a<60)
        {
            val=1;
        }
        if (a<70&&a>59)
        {
            val=2;
        }
        if (a<80&&a>69)
        {
            val=3;
        }
        if (a<90&&a>79)
        {
            val=4;
        }
        if (a>89)
        {
            val=5;
        }
    switch (val)
    {
    case 1:
        cout << "E" << endl;
        break;
    case 2:
        cout << "D" << endl;
        break;
    case 3:
        cout << "C" << endl;
        break;
    case 4:
        cout << "B" << endl;
        break;
    case 5:
        cout << "A" << endl;
        break;
    }
    }

};

int main() {
    Age s1;
    int a;
    cin >> s1.a;
    s1.show(s1.a);
    return 0;
}
