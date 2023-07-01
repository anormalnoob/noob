#include <iostream>
#include <string>
using namespace std;

class Sort {
public:
    string s1;
    int k;

    void scanKey() {
        cin >> s1 >> k;
    }

    void formatKey() {
        string s = "";
        for (char c : s1) {
            if (c != '-') {
                s += c;
            }
        }
        for (char& c : s) {
            if (islower(c)) {
                c = toupper(c);
            }
        }
        int len = s.length();
        int first_len = len % k; 
        if (first_len == 0) {
            first_len = k;
        }
        string result = s.substr(0, first_len);
        for (int i = first_len; i < len; i += k) {
            result += '-';
            result += s.substr(i, k);
        }
        cout << result << endl;
    }
};

int main() {
    Sort sor;
    sor.scanKey();
    sor.formatKey();
    return 0;
}
