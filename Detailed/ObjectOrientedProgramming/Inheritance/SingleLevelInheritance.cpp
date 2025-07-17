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
    // ~ Single level inheritence - 1 base class and 1 child class
    // ^ (base class declared above (line - 227), child class declared above (line - 245))
    // ^ Calling classes - 
    rectangle rect;
    shapes sh;
    sh.setValues(6, 8);
    sh.printValues();
    rect.setValues(8, 10);
    rect.printValues();
    cout << "Perimeter: " << rect.rectParameter() << endl;
    cout << "Area: " << rect.rectArea() << endl;
    return 0;
}