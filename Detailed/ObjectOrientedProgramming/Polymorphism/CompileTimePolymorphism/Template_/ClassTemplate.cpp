// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;
template <typename T>
class weight {
    private:
        T kg;
    public:
        void setData(T w) {
            kg = w;
        }
        void printData() {
            cout << "Kg value is: " << kg << endl;
        }
};
int main()
{
/*
    ^ Sometimes, you need a class implementation that is same
    ^ for all classes, only the data types used are different.

    ^ Normally, you would need to create a different class for each
    ^ data type OR create different member variables and functions within a single class.

    ^ In Class Templates We write a CLASS that can be used for different data types.
*/
    weight <int>w1;
    w1.setData(5);
    w1.printData();

    weight <float>w2;
    w2.setData(5.55f);
    w2.printData();

    weight <string>w3;
    w3.setData("STIRNG");
    w3.printData();

    return 0;
}