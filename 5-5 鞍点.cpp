#include <iostream>
using namespace std;

class Matrix {
private:
    int n;
    int **a;
public:
    Matrix(int n) {
        this->n = n;
        a = new int*[n];
        for (int i = 0; i < n; i++) {
            a[i] = new int[n];
        }
    }
    ~Matrix() {
        for (int i = 0; i < n; i++) {
            delete[] a[i];
        }
        delete[] a;
    }
    void set(int i, int j, int value) {
        a[i][j] = value;
    }
    int get(int i, int j) {
        return a[i][j];
    }
    void findSaddlePoint() {
        bool found = false;
        for (int i = 0; i < n; i++) {
            int rowMax = a[i][0];
            int colIndex = 0;
            for (int j = 1; j < n; j++) {
                if (a[i][j] > rowMax) {
                    rowMax = a[i][j];
                    colIndex = j;
                }
            }
            bool isSaddlePoint = true;
            for (int k = 0; k < n; k++) {
                if (a[k][colIndex] < rowMax) {
                    isSaddlePoint = false;
                    break;
                }
            }
            if (isSaddlePoint) {
                cout << i << " " << colIndex << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "NO" << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    Matrix matrix(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int value;
            cin >> value;
            matrix.set(i, j, value);
        }
    }
    matrix.findSaddlePoint();
    return 0;
}
