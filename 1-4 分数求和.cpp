#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;
    int numer = 0, denom = 1;
    for(int i = 0; i < n; i++) {
        int a, b;
        char slash;
        cin >> a >> slash >> b;
        int g = gcd(abs(a), abs(b));
        a /= g;
        b /= g;
        numer = numer * b + a * denom;
        denom *= b;
        g = gcd(abs(numer), abs(denom));
        numer /= g;
        denom /= g;
    }
    if(denom == 1) cout << numer << endl;
    else if(denom == 0) cout << "error" << endl;
    else cout << numer << "/" << denom << endl;
    return 0;
}
