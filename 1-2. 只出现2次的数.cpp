#include <iostream>
using namespace std;

const int MAX_N = 100000;
int numCount[MAX_N] = {0};

const int MAX_RESULT = 20;
int result[MAX_RESULT] = {0};
int resultSize = 0;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numCount[num]++;
    }

    for (int i = 0; i < MAX_N; i++) {
        if (numCount[i] == 2) {
            result[resultSize++] = i;
        }
    }

    if (resultSize == 0) {
        cout << "none" << endl;
    } else {
        for (int i = 0; i < resultSize; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
