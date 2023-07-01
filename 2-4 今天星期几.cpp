#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    Date(const string& date_str) {
        sscanf_s(date_str.c_str(), "%d-%d-%d", &year, &month, &day);
    }
    
    string getday() {
        int y = year, m = month, d = day;
        if (m == 1 || m == 2) {
            m += 12;
            y--;
        }
        int week = (d + 2*m + 3*(m+1)/5 + y + y/4 - y/100 + y/400) % 7;
        return days[week];
    }
    
private:
    int year;
    int month;
    int day;
    const string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","Sunday"};
};

int main() {
    string date_str;
    cin >> date_str;
    Date date(date_str);
    cout << date.getday() << endl;
    return 0;
}
