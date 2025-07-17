// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

class Car
{
    private:
        // ^ These variables are private and cannot be accessed outside this class  
        // ^ Variables inside a class are known as member variables or data member
        int speed;
        int price;
        string company;
        string modal;
        string owner;
    
    public:
        // & Constructors -
        // ^ Constructor is automatically called when object is created
        // ^ Constructor has the same name that of the class, they don't have return type, 
        // ^ It is called automatically when object is created

        // * Default constructor - 
        // ^ Default constructor is the constructor which dosen't take any argument.
        Car() {
            speed = 0;
            price = 0;
            company = "----";
            modal = "----";
            owner = "----";
        }
        // * Parameterized constructor - 
        // ^ Parameterized constructor is create by adding parameters to the default constructor
        // ^ When creating an object you can specify the parameters
        Car(int s, int p, string c, string m, string o) { 
            speed = s;
            price = p;
            company = c;
            modal = m;
            owner = o;
        }

        // * Copy constructor -  
        // ^ A Copy constructor is a member function which initializes an object using another object of the same class
        Car(Car &obj) {
            speed = obj.speed;
            price = obj.price;
            company = obj.company;
            modal = obj.modal;
            owner = obj.owner;
        }
        // ^ These functions are public and can be accessed outside this class
        void setData(int s, int p, string c, string m, string o) {
            // ^ Setting up the data 
            // ^ We declared private variables so that we can use them anywhere in this class but not outside this class
            // ^ Functions inside a class are known as member functions
            speed = s;
            price = p;
            company = c;
            modal = m;
            owner = o;
        }

        void printData() {
            // ^ Displaying data
            cout << "Speed: " << speed << " Km/h" << endl;
            cout << "Price: " << price << "$" << endl;
            cout << "Company: " << company << endl;
            cout << "Modal: " << modal << endl;
            cout << "Owner: " << owner << endl;
        }

        friend void congo(Car &c); // ^ function defined below (line - 201)

        // & Destructor -
        // ^ Syntax - ~class name() {  code here }
        ~Car() {
            cout << "Destructor called" << endl;
        }
};

void congo(Car &c) {
    cout << "Congo " << c.owner << " you bought " << c.company << " " << c.modal << endl;
}

int speed1;
int price1;
string company1;
string modal1;
string owner1;

void setData1(int s, int p, string c, string m, string o) {
    speed1 = s;
    price1 = p;
    company1 = c;
    modal1 = m;
    owner1 = o;
}

void printData1() {
    cout << "Speed: " << speed1 << " Km/h" << endl;
    cout << "Price: " << price1 << "$" << endl;
    cout << "Company: " << company1 << endl;
    cout << "Modal: " << modal1 << endl;
    cout << "Owner: " << owner1 << endl;
}

int main()
{
    Car car1;
    car1.setData(250, 300000, "BMW", "Series 7", "Bhai the gangster");
    car1.printData();
    Car car2;
    car1.setData(200, 150000, "Audi", "R-8", "Bhai the boister");
    car1.printData();
    // ~ Using pointer to create object and call member functions -
    cout << "Using pointer to create object and call member functions" << endl;
    // ^ We use pointer to save memory you can check that by using sizeof operator
    cout << "Using pointer to display data of car1 and car2" << endl;
    Car *carPtr;
    carPtr = &car1;
    carPtr->printData();

    carPtr = &car2;
    carPtr->printData();
    cout << "Size of object using pointer: " << sizeof(carPtr) << " " << "Size of normal object: " << sizeof(car1) + sizeof(car2) << endl;

    // ~ Friend functions (declared above (line - 192)) -
    cout << "Friend function" << endl;
    // ^ a friend function of a class is defined outside the class scope but it has the right
    // ^ to access all private and protected members of the class 
    congo(car1);
    return 0;
}