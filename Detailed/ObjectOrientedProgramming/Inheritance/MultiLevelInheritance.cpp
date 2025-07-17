// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

class BaseClass {
    public: 
        void hello() {
            cout << "HEllO" << endl;
        }
        void commonFunc() {
            cout << "COMMON FUNCTION Base class" << endl;
        }
};

class DerivedClass1: public BaseClass {
    public:
        void greetings() {
            cout << "GOOD MORNING" << endl;
        }
        void commonFunc() {
            cout << "COMMON FUNCTION Derived class 1" << endl;
        }
};

class DerivedClass2: public DerivedClass1 {
    public:
        void bye() {
            cout << "Bye" << endl;
        }
        // ^ Don't override common function to get derived class 1 output
        // void commonFunc() {
        //     cout << "COMMON FUNCTION Derived class 2" << endl;
        //     BaseClass::commonFunc();
        // }
        
        // ^ Use the code given below to redefine common function -
        // void commonFunc() {
        //     cout << "COMMON FUNCTION Derived class 2" << endl;
        // }

        // ^ Use the code given below to get base class output -
        void commonFunc() {
            BaseClass::commonFunc();
        } 
};

int main()
{
    // ~ Multi level inheritence - 1 base class and 1 child classes and 1 more child class inheriting from above child class
    /*
    ^ Not only you can derive a class from the base class but you can also derive a class from the derived class.
    ^ This form of inheritance is known as multilevel inheritance.
    
    ^                                                    BASE CLASS
    ^                                                        |
    ^                                                        |
    ^                                                  DERIVED CLASS
    ^                                                        |
    ^                                                        |
    ^                                                  DERIVED CLASS
    */
    DerivedClass2 objDerivedClass2;
    objDerivedClass2.hello();
    objDerivedClass2.greetings();
    objDerivedClass2.bye();
    objDerivedClass2.commonFunc();
    return 0;
}