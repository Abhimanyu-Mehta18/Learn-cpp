// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

// & Function overriding example -
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
        void area() {
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
    // & Function overriding (Class declared above (line - 256))- 
    cout << "Function overriding" << endl;
    /*
    ^ If derived class defines same function as defined in its base class, it is known as function overriding.
    ^ If you create an object of the derived class and call the member function which exists in both classes 
    ^ (base and derived), the member function of the derived class is invoked and the function of the base class is ignored
    */
    // ! In function overriding the function and its parameters and return type should be same only the inside code should be different
    // ^ Calling all same member functions of the classes -
    Shapes_FunctionOverridingExample shOverridng;
    shOverridng.area();
    Rectangle_FunctionOverridingExample rectOverriding;
    rectOverriding.area();
    Square_FunctionOverridingExample sq;
    sq.area();
    // ! You cannot use pointers in inheritance. To use pointers you need to create virtual function
    // ^ Run the code below and you will see that you cannot input values and it auto assigns the value
    // ^ Open file "VirtualFunction.cpp" to see the use of virtual function 
    Shapes_FunctionOverridingExample *ptr;
    ptr = &rectOverriding;
    ptr->area();
    ptr = &sq;
    ptr->area();

    cout << "Size of ptr: " << sizeof(ptr) << endl << "Size of normal object: " << sizeof(rectOverriding) + sizeof(sq) << endl;
    return 0;
}