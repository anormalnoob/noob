#include <iostream>
#include <stdio.h>
using namespace std;

void bubbleSort(int array[],int w){
    for(int i=0;i<w-1;i++){
        for(int j=0;j<w-i-1;j++)
            if(array[j] < array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
int main() {
    string str;
    int count[26]={0};
    int len,sum=0;
    int i,j=0;
    cin >> str;
    len = str.size();
    for(i=0;i<len;i++)
    {
        count[str[i]-97]++;
    }
    bubbleSort(count,26);
    for(i=0;i<26;i++)
    {
        sum=sum+(26-i)*count[i];
    }
    cout << sum << endl;
    return 0;
}
