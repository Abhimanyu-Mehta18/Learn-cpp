// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

// & Virtual functions -
class Shapes_FunctionOverridingExample {

    protected:
        int width;
        int height;

    public:
        void setValues(int w, int h) {
            width = w;
            height = h;
        }
        void printValues() {
            cout << "Width: " << width << " " << "Height: " << height << endl;
        }
        virtual void area() {
            cout << 0 << endl;
        }

};

// ^ Chlid class
class Rectangle_FunctionOverridingExample: public Shapes_FunctionOverridingExample {
    public:
        void area() {
            cout << "Enter the length and breadth of the rectangle: ";
            int l, b;
            cin >> l >> b;
            cout << l * b << endl;
        }
};

class Square_FunctionOverridingExample: public Shapes_FunctionOverridingExample {
    public:
        void area() {
            cout << "Enter the side of the square: ";
            int s;
            cin >> s;
            cout << s*s << endl;
        }
};


int main()
{
    // ~ Virtual function (classes and function declared above (line - 295)) -
    /*
    ^ A virtual function is a member function which is declared within base
    ^ class and is re-defined (Overridden) by derived class.
    ^ When you refer to a derived class object using a pointer or a
    ^ reference to the base class, you can call a virtual function for that
    ^ object and execute the derived class's version of the function.
    ^ Virtual functions ensure that the correct function is called for an object,
    ^ regardless of the type of reference (or pointer) used for function call.
    ^ They are mainly used to achieve Runtime polymorphism
    ^ Functions are declared with a virtual keyword in base class.
    ^ The resolving of function call is done at Run-time.
    */
    //  ^ creating object of the class and calling its common member functions NORMALLY -
    Shapes_FunctionOverridingExample shOverridng;
    shOverridng.area();
    Rectangle_FunctionOverridingExample rectOverriding;
    rectOverriding.area();
    Square_FunctionOverridingExample sq;
    sq.area();
    // ! USING POINTERS AND CALLING THE COMMON MEMBER FUNCTIONS
    Shapes_FunctionOverridingExample *ptr;
    ptr = &rectOverriding;
    ptr->area();
    ptr = &sq;
    ptr->area();

    cout << "Size of ptr: " << sizeof(ptr) << endl << "Size of normal object: " << sizeof(rectOverriding) + sizeof(sq) << endl;
    return 0;
}