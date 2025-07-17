// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

class Animal
{
    public:
        string animalFood = "Animal food ";
        void food() {
            cout << animalFood << endl;
        }
 
};
class Cat:public Animal
{
    public:
        string animalFood = "Cat food ";
        void food() {
            cout << animalFood << endl;
        }
};

class Dog:public Animal
{
    public:
    string animalFood = "Dog food ";
        void food() {
            cout << animalFood << endl;
        }
};

class Horse: public Animal {
    public:
        string animalFood = "Horse food";
        void food() {
            cout << animalFood << endl;
        }
};

int main()
{
    // ~ Hierarchial inheritence - 1 base class and 3 child classes 
    /*
    ^ If more than one class is inherited from the base class, it's known as hierarchical inheritance. 
    ^ In hierarchical inheritance, all features that are common in child classes are included in the base class.
    */
    Animal objAnimal;
    objAnimal.food();

    Cat objCat;
    objCat.food();

    Dog objDog;
    objDog.food();

    Horse objHorse;
    objHorse.food();

    return 0;
}