#include <iostream>
#include <string>
using namespace std;

class Sort {
public:
    string s1, s2;

    void scanString() {
        cin >> s1 >> s2;
    }

    void searchString() {
        size_t pos = 0;
        if((pos = s2.find(s1, pos)) != string::npos){
        while ((pos = s2.find(s1, pos)) != string::npos) {
            cout << pos << " ";
            pos += s1.length();
        }
        }
        else
        {
            cout << "-1";
        }
    }
};

int main() {
    Sort sor;
    sor.scanString();
    sor.searchString();
    return 0;
}
