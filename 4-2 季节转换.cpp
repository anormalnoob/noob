#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;

class Season {
public:
    int a;
    void show(int a){
    switch (a)
    {
    case 1:
        cout << "Spring" << endl;
        break;
    case 2:
        cout << "Summer" << endl;
        break;
    case 3:
        cout << "Fall" << endl;
        break;
    case 4:
        cout << "Winter" << endl;
        break;
    }
    }

};

int main() {
    Season s1;
    int a;
    cin >> s1.a;
    s1.show(s1.a);
    return 0;
}
