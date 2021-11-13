#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int num1 = 1;
    int num2 = 1;
    int num3 = 0;
    if(n>=1){
        cout<<num1<<endl<<num2<<endl;
    }
    while(n>=num3){
        num3=num1+num2;
        num1=num2;
        num2=num3;
        if(n>=num3){
            cout<<num3<<endl;
        }
    }
    return 0;
}
