#include<iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j1 = 1;
        while (j1<=n-i+1)
        {
            cout<<j1;
            j1++;
        }
        
        int j2 =1;
        while (j2<=i-1)
        {
            cout<<"**";
            j2++;
        }

        int j3 = 1;
        while (j3<=n-i+1)
        {
            cout<<n-i-j3+2;
            j3++;
        }
        

        cout<<endl;
        i++;
    }

    return 0;
}