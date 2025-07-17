// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;
class OperatorOverloadingExample {
    public:
        int age;
        string name;

        void setInfo(int a, string n) {
            age = a;
            name = n;
        }
        void printInfo() {
            cout << name << ", your age is " << age << endl;
        }
        OperatorOverloadingExample operator+(OperatorOverloadingExample o) {
            OperatorOverloadingExample temp;
            temp.age = age + o.age;
            temp.name = name + o.name;
            return temp;
        }
        void operator++(int) {
            age++;
        }
};
int main()
{
    // & Operator overloading -
    /* 
    ^ C++ allows you to specify more than one definition for an operator in the
    ^ same scope, which is called operator overloading.
    ^ You can redefine or overload most of the built-in operators available in C++
    ^ It is a type of polymorphism in which an operator is overloaded to give user
    ^ defined meaning to it.
    ^ Almost any operator can be overloaded in C++. However there are few
    ^ operator which can not be overloaded. Operator that are not overloaded are
    ^ follows-
    ^ scope operator (::)
    ^ sizeof
    ^ member selector -(.)
    ^ member pointer selector – (*)
    ^ ternary operator - (?:)
    */
    OperatorOverloadingExample obj1;
    OperatorOverloadingExample obj2;
    OperatorOverloadingExample obj3;
    obj1.setInfo(14, "Abhimanyu");
    obj2.setInfo(1, "Curio");
    obj2++;
    obj1.printInfo();
    obj2.printInfo();
    obj3 = obj1+obj2; // obj1.add(obj2)
    obj3.printInfo();
    return 0;
}