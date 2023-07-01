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
        if (a<11)
        {
            val=1;
        }
        if (a<21&&a>10)
        {
            val=2;
        }
        if (a<41&&a>20)
        {
            val=3;
        }
        if (a<51&&a>40)
        {
            val=4;
        }
        if (a<81&&a>50)
        {
            val=5;
        }
        if (a<101&&a>80)
        {
            val=6;
        }
    switch (val)
    {
    case 1:
        cout << "Children" << endl;
        break;
    case 2:
        cout << "Teenagers" << endl;
        break;
    case 3:
        cout << "Youth" << endl;
        break;
    case 4:
        cout << "Middle-aged" << endl;
        break;
    case 5:
        cout << "Elderly" << endl;
        break;
    case 6:
        cout << "Old man" << endl;
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
