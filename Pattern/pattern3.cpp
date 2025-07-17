#include<iostream>
/*
1
23
345
4567
56789
*/
using namespace std;

int main() {
    // int n;
    // cin>>n;

    // int i = 1;
    // int count;
    // while (i<=n)
    // {
    //     int j = 1;
    //     count= i;
    //     while (j<=i)
    //     {
    //         cout<<count++; // or remove count and print i-j+2
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<i+j-1;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}