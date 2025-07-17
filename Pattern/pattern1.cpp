#include<iostream>
/*
12345
12345
12345
12345
12345
*/


/*
* For pattern questions :- 
* STEP 1 :- identify the relation between row, column, n (in most cases - either row = column or row = n = column)
* STEP 2 :- first loop - row, second loop - column ALWAYS initialize i and j to 1
* STEP 3 :- for number and alphabet patterns, identify the formula for it, if no formula then create external variable
*           and increment/decrement it according to the case
* STEP 4 :- for space questions; first print spaces by finding a relation the print the stars
* STEP 5 :- for pyramid type questions use three loops - 1 for space, 1 for half right triangle and 1 for other half opposite
*           right triangle

*/
using namespace std;

int main(){
    int n;
    cin>> n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << j;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}