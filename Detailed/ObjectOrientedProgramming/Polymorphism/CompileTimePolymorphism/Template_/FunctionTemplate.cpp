// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

// ^ Declaring template
template <typename t, typename t1>
// ^ It will return datatype of t and not t1
t add(t x, t1 y) {
    return(x+y);
}

int main()
{
/*
    ^ Function templates are special functions that can operate with generic types.

    ^ This allows us to create a function template whose functionality can
    ^ be adapted to more than one type or class without repeating the entire code for each type.

    ^ The simple idea is to pass data type as a parameter so that we don't
    ^ need to write same code for ɖifferent data types.

    ^ We write a generic function that can be used for different data types.
*/
    // ^ Calling template function -
    cout << add<int, int>(6, 7) << endl;
    cout << add<float, int>(7.7f, 7) << endl;
    cout << add<int, float>(3, 4.444f) << endl;
    cout << add<double, double>(5.5555, 6.6666) << endl;
    return 0;
}