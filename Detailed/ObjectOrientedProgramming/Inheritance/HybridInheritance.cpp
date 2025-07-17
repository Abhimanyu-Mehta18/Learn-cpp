// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

class BaseClass {
    protected:
        int var;
};

class DerivedClass1: public BaseClass {
    public:
        DerivedClass1() {
            var = 1;
        }
};

class DerivedClass2: public BaseClass {
    public:
        DerivedClass2() {
            var = 2;
        }
};

class DerivedClass3: public DerivedClass1, public DerivedClass2 {
    public:
        void getValue() {
            cout << "Int value is: " << DerivedClass2::var << endl;
        }
};

int main()
{
    // ~ Hybrid inheritence - 1 base and 2 child classes and 1 more child class inheriting from 2 child class
    /*
    ^ In hybrid inheritance, there is a combination of one or more inheritance types. 
    ^ For instance, the combination of single and hierarchical inheritance.
    ^ Therefore, hybrid inheritance is also known as multipath inheritance.
    */
    DerivedClass3 obj;
    obj.getValue();
    return 0;
}