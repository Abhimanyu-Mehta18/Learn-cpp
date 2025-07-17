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

        // & Destructor -
        // ^ Syntax - ~class name() {  code here }
        ~Car() {
            cout << "Destructor called" << endl;
        }
};

int main()
{
    // & Constructor 
    cout << "Constructors" << endl;

    // ^ Normally calling the class without using any constructor (class declared above (line - 125)) -
    cout << "Normally calling the class" << endl;
    Car withoutConstructor;
    withoutConstructor.setData(250, 300000, "BMW", "Series 7", "Bhai the gangster");
    withoutConstructor.printData();

    // ^ Calling default constructor (constructor declared above (line - 142)) -
    cout << "default constructor" << endl;
    Car defaultConstructor;
    defaultConstructor.printData();

    // ^ Calling parameterized constructor (constructor declared above (line - 151)) -
    cout << "parameterized constructor" << endl;
    Car parameterizedConstructor(60, 1000, "Maruti", "Alto", "Bhai the beggar");
    parameterizedConstructor.printData();

    // ^ Calling copy constructor (constructor declared above (line - 162)) -
    cout << "copy constructor" << endl;
    Car copyConstructor = defaultConstructor;
    copyConstructor.printData();

    // & Destructors (Destructor declared above (line - 194)) -
    cout << "Destructor" << endl;
    // ^ It is a member function which deletes an object
    /* 
    ! When do we need to write a user defined destructor
    ! If we do no write our own destructor in class, compiler creates a default destructor for us.
    ! The default destructor works fine unless we have dynamically allocated memory or pointer in class.
    ! When a class contains a pointer to memory allocated in class, we should write a destructor to release
    ! memory before the class instance is destroyed. This must be done to avoid memory leak.
    ! It is called when the program ends 
    */

    return 0;
}