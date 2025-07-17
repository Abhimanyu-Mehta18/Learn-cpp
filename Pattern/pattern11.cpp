#include <iostream>
/*
-    **
-   *  *
-  *    *
- *      *
*/
using namespace std;

int main() {
    int n;
    cin>>n;

    int i= 1;

    while (i<=n)
    {
        int space = 1;
        while (space <= n-i+1)
        {
            cout << " ";
            space++;
        }
         
        cout << "*"; 

        int sp2 = 1;
        while (sp2<i)
        {
            cout << "  ";
            sp2++;
        }
        cout << "*";

        cout << endl;
        i++;
    }
    

}