// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;
// ^ Base class -
class shapes {

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

};

// ^ Chlid class
class rectangle: public shapes {
    public:
        int rectArea() {
            return (width * height);
        }
        int rectParameter() {
            return (2*(height + width));
        }
};
int main()
{
    // & Inheritance (base class declared above (line - 227), child class declared above (line - 245)) -
    // ^ Inheritance allows to define a class in terms of another class 
    // ^ FOR DETAILED EXPLAINATION WATCH SIMPLE SNIPPETS VIDEO (C++ SERIES (VIDEOS - 33-35))
    // ^ Calling classes -
    rectangle rect;
    rect.setValues(6, 7);
    rect.printValues();
    cout << rect.rectArea() << endl;
    cout << rect.rectParameter() << endl;
    return 0;
}