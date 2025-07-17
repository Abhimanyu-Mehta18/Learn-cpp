// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

class dataMember {
    private:
        // ^ Declaring static data member
        static int count;

    public:
        int x;
        
        dataMember() {
            count++;
        }
        // ^ Declaring static member function
        static int getCount() {
            return count;
        }
};

// ^ Initialization of static data member
int dataMember::count = 0;

int main()
{
    /* 
    ^ By declaring a member function as static, you make it independent of any
    ^ particular object of the class. A static member function can be called even if
    ^ no objects of the class̟exist and the static functions are accessed using only
    ^ the class name and the scope resolution operator (::)
    ^ A static member function can only access static data member, other static
    ^ member functions and any other functions from outside the class.
    ^ Static member functions have a class scope and they do not have access to
    ^ the this pointer of the class.
    ^ You could use a static member function to determine whether some objects
    ^ of the class have been created or not.
    */
    cout << "Initial value of count variable: " << dataMember::getCount() << endl;
    dataMember dm1, dm2, dm3;
    cout << "Value of count variable after 3 objects: " << dataMember::getCount() << endl;
    return 0;
}