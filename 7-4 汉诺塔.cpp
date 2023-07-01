#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Han {
public:
    int n;
    int move=1;
    char a,b,c;
    void solution(int n, char a, char b, char c)
    {
        if(n==1){
        cout << "Step" << move << ": Move Disk" << n << " from " << a << " to " << c << endl;
        }
        else{
            solution(n-1, a, c, b);
            move++;
            cout << "Step" << move <<": Move Disk" << n << " from " << a << " to " << c << endl;
            move++;
            solution(n-1, b, a, c);
        }
    }

};

int main() {
    Han tower;
    int n;
    cin >> n;
    tower.solution(n,'A','B','C');
    return 0;
}
