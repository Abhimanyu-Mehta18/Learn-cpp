#include<iostream>
/*
D
CD
BCD
ABCD
*/
using namespace std;

int main() {

    int n;
    cin>>n;

    int i = 1;

    while (i<=n) {
        int j = 1;
        while (j<=i)
        {
            char c = 'A' + n- i + j - 1;
            cout<<c;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}