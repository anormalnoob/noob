#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Student {
public:
    string stuname;
    float s1,s2,sa=0;
    float cal(float s1,float s2){
        sa=0.4*s1+0.6*s2;
        return sa;
    }
};

void bubbleSort(Student stus[], int n) {
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
        if (stus[j].cal(stus[j].s1, stus[j].s2) < stus[j + 1].cal(stus[j + 1].s1, stus[j + 1].s2)) {
            Student temp = stus[j];
            stus[j] = stus[j + 1];
            stus[j + 1] = temp;
}
}
}
}
int main()
{
    int n; // n=学生个数
    cin >> n;

    Student *stus = new Student[n]; 

    // 输入
    for(int i=0; i<n; i++){
        cin >> stus[i].stuname >> stus[i].s1 >> stus[i].s2;
    }

    // 输出
    bubbleSort(stus,n);
    for(int i=0; i<n; i++){
        cout << fixed << setprecision(2) << stus[i].stuname << " " << stus[i].s1 << " " << stus[i].s2 << " " << stus[i].cal(stus[i].s1,stus[i].s2) << endl;
    }

    delete[] stus; 
    return 0;
}
