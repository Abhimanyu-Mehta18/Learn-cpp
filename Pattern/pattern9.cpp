#include<iostream>
/*
   1
  121
 12321
1234321
*/
using namespace std;

int main() {
    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int sp1=1;
        while (sp1<n-i+1)
        {
            cout<<" ";
            sp1++;
        }

        int j1 =1;
        while (j1<=i)
        {
            cout<<j1;
            j1++;
        }
        int j2=1;
        while (j2<i)
        {
            cout<<i-j2;
            j2++;
        }
        

        cout<<endl;
        i++;
        
        
    }
    
}