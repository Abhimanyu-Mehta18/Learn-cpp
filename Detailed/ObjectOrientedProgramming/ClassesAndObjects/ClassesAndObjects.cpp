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
};

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
    // * Classes and objects (Class declared above (line - 125)) -
    cout << "Classes and objects" << endl; 
    // ^ Functions do specific things, classes are specific things.
    // ^ Creating objects and then calling the member functions of the class
    // ^ Classes are user defined datatypes you can create functions with your class or even assign variables with them
    // ^ FOR DETAILED EXPLAINATION WATCH SIMPLE SNIPPETS VIDEO (C++ SERIES (VIDEOS - 33-35))

    Car car1;
    car1.setData(250, 300000, "BMW", "Series 7", "Bhai the gangster");
    car1.printData();
    Car car2;
    car1.setData(200, 150000, "Audi", "R-8", "Bhai the boister");
    car1.printData();
    Car car3;
    car1.setData(210, 200000, "Mercedes", "GLA-200", "Bhai the lamester");
    car1.printData();

    // ! We can do the same thing with functions but then the variables will be global and can be accessed easily
    // ^ doing the same thing with functions (variables and functions declared above (line - 157)) -

    setData1(180, 500000, "RR", "Phantom", "Bhai the shamester");
    printData1();
    setData1(340, 700000, "Lamborghini", "Urus", "Bhai the cheapster");
    printData1();
    setData1(450, 9000000, "Bugatti", "Chiron", "Bhai the hamster");
    printData1();

    /*
    ! Conclusion - the results will be same in both the cases but in this case we will most probably use classes because
    ! variables are important and we don't want them to be accessed easily and also it is more convinent the code visiblity
    ! is also increased
    */
    return 0;
}