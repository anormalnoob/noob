#include <iostream>
using namespace std;

int main() {
    string email;
    cin >> email;
    int len = email.length();
    bool hasAt = false, hasDot = false;
    for(int i = 0; i < len; i++) {
        char ch = email[i];
        if(ch == '@') {
            if(hasAt || i == 0 || i == len - 1 || hasDot) {
                cout << "no" << endl;
                return 0;
            }
            hasAt = true;
        } else if(ch == '.') {
            if(i == 0 || i == len - 1 || hasDot || i < email.find('@') + 2) {
                cout << "no" << endl;
                return 0;
            }
            hasDot = true;
        } else if(!isalnum(ch) && ch != '_' && ch != '-') {
            cout << "no" << endl;
            return 0;
        }
    }
    if(!hasAt || !hasDot) {
        cout << "no" << endl;
        return 0;
    }
    cout << "yes" << endl;
    return 0;
}
