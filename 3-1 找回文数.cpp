#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;

class Re {
public:
    int m, k = 0;
    void input(int a, int b) {
        m = a;
        k = b;
    }
    void findf() {
        int m1 = m, count = 0;
        while (count < k) {
            int digit[99] = {0}, i = 0, j = 0, flag = 0, weight = 10;
            while (m1 != 0) {
                digit[i] = (m1 % weight) / (weight / 10);
                m1 = m1 - digit[i] * (weight / 10);
                i++;
                weight = weight * 10;
            }
            while (j < i - 1) {
                if (digit[j] != digit[i - 1]) {
                    flag = 1;
                    break;
                }
                j++;
                i--;
            }
            if (flag == 0) {
                cout << m << " ";
                count++;
            }
            m++;
            m1 = m;
        }
    }
};

int main() {
    Re t1;
    int a, b = 0;
    cin >> a >> b;
    t1.input(a, b);
    t1.findf();
    return 0;
}
