// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

class dataMember {
    public:
        int x;
        // ^ Declaring static data member
        static int count;
        dataMember() {
            count++;
        }
};

// ^ Initialization of static data member
int dataMember::count = 0;

int main()
{
    /* 
    ^ A static member is shared by all objects of the class.
    ^ All static data is initialized to zero when the first
    ^ object is created, if no other initialization is present.
    ^ We can't put it in the class definition but it can be
    ^ initialized outside the class using the scope
    ^ resolution operator : to identify which class it
    ^ belongs to.
    ^ When we declare a member of a class as static it
    ^ means no matter how many objects of the class are
    ^ created, there is only one copy of the static member.
    */
    cout << "Initial value of count variable: " << dataMember::count << endl;
    dataMember dm1, dm2, dm3;
    cout << "Value of count variable after 3 objects: " << dataMember::count << endl;
    return 0;
}