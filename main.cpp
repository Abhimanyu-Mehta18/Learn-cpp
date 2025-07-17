// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include <iostream> 
#include <string>
#include <fstream>

using namespace std;

// & Creating functions(functions called below (line - 332)) - 
/* 
^ Syntax - returntype functionname(parameters) {
    // CODE HERE
^ } 
*/
// ! Void returns nothing
// ! other datatypes returns the given value
int additionReturn(int a, int b) {
    // ^ Returns the sum of a and b
    return a+b;
}
void additionNoReturn(int a, int b) {
    // ^ Displays the sum of a and b
    cout << a+b << endl;
}
string greetingReturn(string a, string b) {
    // ^ Returns the string created by the concatination of a and b
    return a+b;
}
void greetingsNoReturn(string a, string b) {
    // ^ Displays the string created by the concatination of a and b
    cout << a + b << endl;
}

// & Creating Inline functions (fuction called below) -
/*
^ inline datatype functionName(parameters) {
    // code here
^ }
*/
inline int subtraction(int a, int b) {
    return a-b;
}

// & Default parameters (function called below) - 
// ^ Assigning a default value to the parameter
/*
! Default parameters always goes from right to left. Eg -
! float multiplication(float a, float b, float c, float d = 1.0) (It will not throw an error)
! float multiplication(float a, float b, float c = 1.0, float d) (It will throw an error because variable d(right most parameter) is not given a default value)
*/ 
float multiplication(float a, float b, float c = 1.0, float d = 1.0) {
    return (a*b*c*d);
}

// & Function overloading (function called below () -

// * Different types of parameters
int division(int a, int b) {
    cout << "Both integer: ";
    return a/b;
} 
double division(double a, double b) {
    cout << "Both double: ";
    return a/b;
}

// * Different number of parameters
int division(int a, int b, int c) {
    cout << "Three integers: ";
    return ((a/b)/c);
}

// * Different sequence of parameters
double division(int a, double b) {
    cout << "one integer and one double: ";
    return a/b;
}
double division(double a, int b)  {
    cout << "one integer and one double: ";
    return a/b;
}

// & Pass by value example (function called below) - 
int speed = 8;
int distanceUsingValue(int x, int y) {
    x += speed;
    // ^ In this case we are changing the value of x so it should get reflelected when we call this function.
    // ^ Since we are using pass by value method for passing arguments, the x argument will not be incremented by speed variable
    // ^ Because the function in which we are calling the function goes to the address of function being called 
    // ^ and then it goes back to the address of the function it was being called. So the value of x will not reflect a change
    // ^ in the value of the argument passed
    return x*y;
}

// & Pass by reference example (function called below) - 
int distanceUsingRefrence(int &x, int &y) {
    // ^ In this case we are using (& (reference)) to give new names to the both parameters 
    // ^ So the value of x will reflect a change in the value of the argument passed
    // ^ Because x and y are going to be new names of the argument we pass
    x += speed;
    return x*y;
}

// & Pass by pointer example (function called below) - 
int distanceUsingPointer(int *x, int *y) {
    *x += speed;
    return (*x)*(*y);
    // ^ In this case we are using ((*)pointers) which are directly refering to the address of the arguments
    // ^ So the value of x will reflect a change in the value of the argument passed
    // ^ because x and y are pointer variables which are pointing to the address of arguments
}

struct person
{
    char userName[100];
    int age;
    int favouriteNumber;
};

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

// & Function overriding example -
class Shapes_FunctionOverridingExample {

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
        void area() {
            cout << 0 << endl;
        }

};

// ^ Chlid class
class Rectangle_FunctionOverridingExample: public Shapes_FunctionOverridingExample {
    public:
        void area() {
            cout << "Enter the length and breadth of the rectangle: ";
            int l, b;
            cin >> l >> b;
            cout << l * b << endl;
        }
};

class Square_FunctionOverridingExample: public Shapes_FunctionOverridingExample {
    public:
        void area() {
            cout << "Enter the side of the square: ";
            int s;
            cin >> s;
            cout << s*s << endl;
        }
};

class Animal
{
    public:
        string animalFood = "Animal food ";
        virtual void food() {
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


int main() {
    // & Displaying stuff -

    cout << "Displaying stuff" <<endl;
    // & Concatination -

    cout << "concatination: " << 1 << ", " << 1.1 << ", " << 'A'<< endl;

    cout << "Datatypes: " << endl;

    // & Length/size of a string -
    string strLength = "Hi this is a string";
    cout << "Length of the string - " << strLength << endl;
    cout << strLength.length() << endl; // ! you can also use strLength.size() to get the length of the string
    // & Variables and datatypes -

    // * Integer number

    int v1 = 12;
    // * Decimal number

    float v2 = 12.2;
    // * Decimal number which can store greater values that cannot be stored in float

    double v3 = 12.2211;
    // * sequence of alphabets

    string v4 = "This is a string";
    // * Char will only display the last character of the string

    char v5 = 'A';
    // * Boolean

    bool v6 = false;
    cout << "Int: " << v1 << endl << "Float: " << v2 << endl << "Double: " << v3 << endl << "String: " << v4 << endl << "Char: " << v5 << endl << "Bool: " << v6 << endl;

    cout << "Operators: " << endl;
    // & Operators -

    cout << "Arithmetic operator: " << endl;

    // * Arithmetic operator - 

    int arithmetic_var_1 = 10;
    int arithmetic_var_2 = 20;
    // ~ Addition (+)

    cout << "Addition: " << arithmetic_var_1 + arithmetic_var_2 << endl;
    // ~ Subtraction (-)

    cout << "Subtraction: " << arithmetic_var_1 - arithmetic_var_2 << endl;
    // ~ Multiplication (*)

    cout << "Multiplication: " << arithmetic_var_1 * arithmetic_var_2 << endl;
    // ~ Division (/)

    cout << "Division: " << arithmetic_var_1 / arithmetic_var_2 << endl;
    // ~ Remainder (%)

    cout << "Remainder: " << arithmetic_var_1 % arithmetic_var_2 << endl;

    cout << "Assignment operators: " << endl;
    // * Assignment operators -

    int assignment_var_1 = 10;
    int assignment_var_2 = 20;
    cout << assignment_var_1 << endl;
    // ~ (=)

    assignment_var_1 = assignment_var_2;
    cout << "Equal operator: " << assignment_var_1 << endl;
    // ~ (+=)

    assignment_var_1 += assignment_var_2;
    cout << "Plus-equal operator: " << assignment_var_1 << endl;
    // ~ (-=)

    assignment_var_1 -= assignment_var_2;
    cout << "Minus-equal operator: " << assignment_var_1 << endl;
    // ~ (*=)

    assignment_var_1 *= assignment_var_2;
    cout << "Multiplication-equal operator: " << assignment_var_1 << endl;
    // ~ (/=)

    assignment_var_1 /= assignment_var_2;
    cout << "Divison-equal operator: " << assignment_var_1 << endl;
    // ~ (%=)

    assignment_var_1 %= assignment_var_2;
    cout << "Remainder-equal operator: " << assignment_var_1 << endl;

    cout << "Relational/Comparison operators: " << endl;
    // * Relational/Comparison operators -
    int relationl_var_1 = 10;
    int relationl_var_2 = 20;
    // ~ Equal to (==)

    cout << "Equal to operator: " << (relationl_var_1 == relationl_var_2) << endl;
    // ~ Not equal to (!=)

    cout << "Not equal to operator: " << (relationl_var_1 != relationl_var_2) << endl;
    // ~ Greater than (>)

    cout << "Greater than operator: " << (relationl_var_1 > relationl_var_2) << endl;
    // ~less than (<)

    cout << "less than operator: " << (relationl_var_1 < relationl_var_2) << endl;
    // ~ greater than or equal to(>=)

    cout << "Greater than or equal to operator: " << (relationl_var_1 >= relationl_var_2) << endl;
    // ~ less than or Equal to (<=)

    cout << "Less than or equal to operator: " << (relationl_var_1 <= relationl_var_2) << endl;
    // ^ Greatest number
    cout << "Enter 3 numbers to find the greatest number among them: " << endl;

    int n1;
    int n2;
    int n3;
    cout << "Number 1: " << endl;
    cin >> n1;
    cout << "Number 2: " << endl;
    cin >> n2;
    cout << "Number 3: " << endl;
    cin >> n3;
    if (n1 > n2) {
        if (n1 > n3) {
            cout << "Greatest number: " << n1 << endl;
        }
        else if (n1 == n3) {
            cout << "Greatest number: " << n1 << " and " << n3 << endl;
        }
        else {
            cout << "Greatest number: " << n3 << endl;
        }
    }
    else if (n2 > n3) {
        if (n2 > n1) {
            cout << "Greatest number: " << n2 << endl;
        }
        else if (n2 == n1) {
            cout << "Greatest number: " << n2 << " and " << n1 << endl;
        }
        else {
            cout << "Greatest number: " << n1 << endl;
        }
    }
    else if (n3 > n1) {
        if (n3 > n2) {
            cout << "Greatest number: " << n3 << endl;
        }
        else if (n3 == n2) {
            cout << "Greatest number: " << n3 << " and " << n2 << endl;
        }
        else {
            cout << "Greatest number: " << n2 << endl;
        }
    }
    else {
        cout << "Greatest number: " << n1 << ", " << n2 << " and " << n3 << endl;
    }

    cout << "Logical operators: " << endl;
    // * Logical operators -

    bool logical_operator_true = true;
    bool logical_operator_false = false;
    // ~ And (&&) 

    cout << "And operator: " << (logical_operator_true && logical_operator_false) << endl;
    // ~ Or (||)

    cout << "Or operator: " << (logical_operator_false || logical_operator_true) << endl;

    cout << "Input: " << endl;
    // & Input -

    cout << "What is your name: "; 
    string name;
    cin >> name;
    cout << "Your first name is: " << name << endl;

    cout << "Control structures: " << endl;
    // & Control structures - 

    // * Simple control structures
    // ~ Conditional
    // ? If else
    cout << "Simple control structures: " << endl << "Conditional: " << endl << "If else" << endl;
    cout << "Enter a number: ";
    int user_input_number;
    cin >> user_input_number;
    if (user_input_number < 0)
    {
        cout << "Negitive" << endl;
    }
    else if (user_input_number == 0)
    {
        cout << "Zero" << endl;
    }
    else {
        cout << "Positive" << endl;
    }
    // ? Switch case
    cout << "Switch case: " << endl;
    cout << "Enter a number between 1 and 7: ";
    int week_day_user_input;
    cin >> week_day_user_input;
    switch (week_day_user_input)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
        break;
    }
    // ^ Calculator
    cout << "Calculator: " << endl;
    int num1;
    int num2;
    int input_operator;
    cout << "Number 1: " << endl;
    cin >> num1;
    cout << "Operator: " << endl;
    cin >> input_operator;
    cout << "Number 2: " << endl;
    cin >> num2;

    if (input_operator == 1)
    {
        cout << num1 + num2 << endl;
    }
    else if (input_operator == 2)
    {
        cout << num1 - num2 << endl;
    }
    else if (input_operator == 3)
    {
        cout << num1 * num2 << endl;
    }
    else if (input_operator == 4)
    {
        cout << num1 / num2 << endl;
    }
    else if (input_operator == 5)
    {
        cout << num1 % num2 << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }
    // ~ Loops -
    cout << "Loops: " << endl;
    // ? For loop
    cout << "For loops: " << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << "5 x " << i << " = " << 5*i << endl;
    }
    // ? While loop
    cout << "While loops: " << endl;
    // ! Condition is checked first in while loop

    string while_loop_name;
    cout << "Name: ";
    cin >> while_loop_name;
    while (while_loop_name != "abhi")
    {
        cout << "Hello World" << endl;
        cin >> while_loop_name;
    }
    // ? Do while loop
    cout << "Do while loops: " << endl;
    // ! Condition is checked after the iteration 

    string do_while_loop_name;
    cout << "Name: ";
    cin >> do_while_loop_name;
    do
    {
        cout << "Hello World" << endl;
        cin >> do_while_loop_name;
    } while (do_while_loop_name != "abhi");

    // * Functions
    cout << "Functions: " << endl;
    // ^ function decelared above main function (line - 14)
    // ^ We use void if we do not want to return something and we will not be able to store the value from the operation peformed in a variable
    // ^ We use another datatypes to return something and we will be able to store the value from the operation performed in a variable
    // ^ Calling the functions -
    additionReturn(2, 5); // ^ It will not print anything because we are not displaying it insted we are fetching the value the function returned
    cout << additionReturn(2, 5) << endl; // ^ Now it will print because we are displaying the returned value
    cout << "Value: " << additionReturn(2, 5) * 2 << endl; // ^We can also peform different operations on this becuase it only returns the value and not displays it
    int sum = additionReturn(2, 5); // ^ We can store it in a variable
    additionNoReturn(5, 2); // ^ It will print the sum of both numbers because it returned nothing insted it printed the sum 
    // ! cout << addtionNoReturn << endl; - It will throw an error because we are just displaying the sum in the function and not returning the value
    // ! we also cannot store it in a variable because it is displaying the sum and not storing it in a variable
    // ! we also cannot peform different operations on the value because it is displaying the sum and not storing it in a variable
    /* 
    ! CONCLUSION - we will most probably use the function which returns the value because 
    ! we will be able to update the value and also we can store it in other variable
    */ 
    greetingReturn("Hello ", "Abhi"); // ^ It will not print anything because we are not displaying it insted we are fetching the value the function returned
    cout << greetingReturn("Hello ", "Abhi") << endl; // ^ Now it will print because we are displaying the returned value
    // ^ We can also update the value by concatinating the string in the cout statement
    greetingsNoReturn("Hello", "Abhi"); // ^ It will print the greetings because it returned nothing insted it printed the greetings
    // ^ We cannot update the value by concatinating the string in the cout statement 
    /*
    ! CONCLUSION - we will most probably use the function which will not return anything because
    ! we dont need to store the value in a variable or update the value we just want to display it as it is 
    */

    // & Arrays - 
    cout << "Arrays: " << endl;

    // * Single dimensional arrays - 
    cout << "1-D Arrays: " << endl;

    // ^ Method 1 (Assigning values at the same time when declaring the variable) - datatype name[size] = {value, value, ....};
    cout << "Method 1" << endl;
    int arrInt[4] = {11, 12, 13, 14};
    cout << arrInt[2] << endl;
    /* 
    ^ Method 2 (Assigning values after declaring the variable) - 
    ^ datatype name[size];
    ^ name[index] = value;
    */
    cout << "Method 2" << endl;
    double arrDouble[2];
    arrDouble[0] = 21.21;
    arrDouble[1] = 22.22;
    cout << arrDouble[1] << endl << arrDouble[0] << endl;
    // * Length of an array - 
    cout << "Length of the array: " << endl;
    int arrLength = sizeof(arrDouble)/sizeof(arrDouble[0]);
    cout << arrLength << endl;

    // * Adding, subtracting, multipling arrays -
    cout << "Addition of 2 arrays: " << endl;
    // ^ Defining arrays
    
    int arr1[3];
    int arr2[3];
    // ^ Inputing values in array 1

    cout << "Enter values for array 1" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
    }
    // ^ Inputing values in array 1

    cout << "Enter values for array 2" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr2[i];
    }
    // ^ Adding both arrays -

    // ! change the signs to +, -, * for peforming different operations  
    cout << "Sum = " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr1[i] + arr2[i] << endl;
    }
    // * 2 dimensional arrays -
    cout << "2-D arrays" << endl;
    // ^ Method 1 - 
    cout << "Method 1" << endl;
    int arr2D[2][2];
    arr2D[0][0] = 1;
    arr2D[0][1] = 3;
    arr2D[1][1] = 2;
    arr2D[1][0] = 4;
    cout << arr2D[0][0] << endl << arr2D[1][1] << endl << arr2D[1][0] << endl << arr2D[0][1] << endl;
    cout << "Method 2" << endl;
    // ^ Method 2 - 
    int arr2D_1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << arr2D_1[1][1] << endl;
    cout << "Method 3" << endl;
    // ^ Method 3 -
    int arr2D_2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr2D_2[1][1] << endl;

    cout << "Displaying 2-D array: " << endl;

    // ^ Displaying 2-D array

        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2D_2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Inputing and displaying 2-D array: " << endl;
    // ^ Inputing and displaying 2-D array - 
    cout << "Enter values for 2-D array: " << endl;
    int arr2D_3[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2D_3[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2D_3[i][j] << " ";
        }
        cout << endl;
    }
    // & Pointers -
    cout << "Pointers" << endl;
    // ^ Pointer is a variable which stores the address of another variable
    // ^ Creating a variable which address will be stored in pointer variable below
    int var = 5;
    // ^ Syntax - datatype *pointername;
    // ! Use same datatype or else it will throw an error
    // ^ pointer takes only 2 bytes of space in the memory
    int *pointerVar;
    // ^ syntax - &variablename, use - it is the address of the given variable 
    cout << &var << endl;
    // ^ assigning the variable address to pointer variable
    pointerVar = &var;
    cout << "Before:- " << endl;
    cout << "Variable value: " << var << endl;
    cout << "Pointer address: " << pointerVar << endl;
    // ^ using * before pointerVar to get the value stored inside the variable var
    cout << "Pointer value: " << *pointerVar << endl;

    // ^ Changing the value of variable using pointer variable
    *pointerVar = 10;
    cout << "After:- " << endl;
    cout << "Variable value: " << var << endl;
    cout << "Pointer address: " << pointerVar << endl;
    cout << "Pointer value: " << *pointerVar << endl;

    // & Dynamic memory allocation -
    cout << "Dynamic memory allocation: " << endl;
    // ^ It allows to set array size dynamically during the run time rather than at compile time.
    // ^ It helps when the program dosen't know in advance about the number of items(variable values) to be stored

    // ^ Inputing the number of values to be stored in the array
    int size;
    int *ptrSize;
    cout << "Enter the number values to be in the array:" << endl;
    cin >> size;

    // ^ Inputing the values to be stored in the array
    ptrSize = new int[size];
    cout << "Enter the values to be stored in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptrSize[i];
    }
    
    // ^ Displaing the values stored in the array
    cout << "Values in the array are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptrSize[i] << endl;
    }

    // & Functions(example above (line - 321)) -
    cout << "Functions: " << endl;

    // * Inline functions(Function declared above (line - 39)) -
    cout << "Inline functions: " << endl;
    /* 
    ^ If we use inline function, the compiler places a copy of the code of that function
    ^ at each point where the function is called at compile time whereas in a normal function 
    ^ it goes to the memory location of that function to locate the function defination 
    ^ and then it again goes back to the main function where it is called
    ^ which takes some time. Because of this reason we use inline functions it saves some time

    ^ It is used when our program is large but the function is small(4-5 lines) which saves some time
    */
    // ^ Calling the function -
    cout << "Result: " << subtraction(5, 2) << endl;

    // * Default parameters (function declared above (line - 49)) -
    cout << "Default parameters: "<< endl;
    /*
    ^ A default argument is a value provided in function declaration that is automatically assigned 
    ^ by the compiler if caller of the function dosen't provide a value for the argument with default value
    */
    // ^ Calling the function - 
    cout << multiplication(3, 4, 5, 6) << endl; // ^ All the arguments are assigned
    // ! cout << multiplication(4) << endl; (It will throw an error because 2nd parameter was not assigned a default value)
    cout << multiplication(2, 3, 4) << endl; // ^ It will not throw an error because 4th parameter was assigned a default value
    cout << multiplication(3, 4) << endl; // ^ It will not throw an error because 3rd and 4th parameter was assigned a default value

    // * Function overloading (Functions declared above (line - 60)) -
    cout << "Function overloading: " << endl;
    /*
    ^ Function overloading is a feature in C++ where 2 or more functions can have the same name but different parameters
    ! An overloaded function must have -
    ! 1. Different type of parameters
    ! 2. Diffetent number of parameters
    ! 3. Different sequence of parametes
    */
    // ^ Calling the functions - 
    cout << division(8, 2) << endl;
    cout << division(8.88, 2.22) << endl;
    cout << division(16, 2, 4) << endl;
    cout << division(10, 2.5) << endl;
    cout << division(8.888, 2) << endl;

    // & Arguments -
    cout << "Different ways of passing arguments: " << endl;
    /*
    ! Difference between arguments and parameters - 
    ! A parameter is the variable listed inside the parentheses in the function definition.
    ! An argument is the value that are sent to the function when it is called.

    ! There are three different types of arguments
    */
    // * Pass by value (function declared above (line - 88)) -
    cout << "Pass by value: " << endl;
    // ! Changes made to the parameter will not affect the passed argument
    int a=10, b=5;
    cout << "Before: " << a*b << endl;

    distanceUsingValue(a, b);
    cout << "After: " << a*b << endl;
    // ^ CONCLUSION - no change in value because pass by value method is used for passing arguments

    // * Pass by reference (function declared above (line - 100)) - 
    cout << "Pass by reference: " << endl;
    // ! Changes made to the parameter will affect the passed argument
    a=10;
    b=5;
    cout << "Before: " << a*b << endl;

    distanceUsingRefrence(a, b);
    cout << "After: " << a*b << endl;

    // * Pass by pointers (function declared above (line - 109) -
    cout << "Pass by pointers: " << endl;
    // ! Changes made to the parameter will affect the passed argument
    a=10;
    b=5;
    cout << "Before: " << a*b << endl;

    // ^ &variablename means - it is the address of the given variable 
    distanceUsingPointer(&a, &b);
    cout << "After: " << a*b << endl;

    // & Exception handling -
    cout << "Exception handling" << endl;
    // ^ It is an unexpected problem during the execution of a program
    // * Try - A block of code which may cause an exception is typically placed inside the try block
    /*
    * Catch - This block catches the exception thrown from the try block.
    * Code to handle the exception is written inside this catch block.
     */ 
    // * A program throws an exception when a problem shows up. This is done using a throw keyword

    // ^ Example 1 - 

    // ^ defining variables, arrays and taking input - 
    int errorArr[4] = {8, 3, 7, 5};
    int indexValue;
    cout << "Enter index of the array: " << endl;
    cin >> indexValue; 
    int arrSize = sizeof(errorArr)/sizeof(errorArr[0]);
    // ^ Exception handling - 
    try
    {
        // ^ checking if index value given by user is greater than the length of the array -  
       if (indexValue >= arrSize){
            // ^ if yes then it will throw the indexValue (Variable for user input) as an exception -
           throw indexValue;
       }
        // ^ Displaying the value of array at given index  
       cout << errorArr[indexValue] << endl;
    }
    // ^ Displaying exception - 
    catch(int ex)
    {
        cout << "Exception out of range: " << ex << endl;
    }
    
    // ^ Example 2 -
    
    // ^ defining variables and taking input -
    double numerator, denominator;
    cout << "Enter numerator and denominator: " << endl;
    cin >> numerator >> denominator;
    
    // ^ Exception handling - 
    try
    {
        // ^ checking if denominator given by user is 0 - 
        if (denominator == 0) {
            // ^ if yes then it will throw the denominater (Variable for user input (value = 0)) as an exception -
            throw denominator;
        }
        // ^ Displaying the value of numerator/denominator - 
        cout << "Result: " << numerator/denominator << endl;
    }
    // ^ Displaying exception - 
    catch(double d)
    {
        cout << "Exception: denominator cannot be 0: " << d;
    }

    // & File handling - 
    // * Files - 
    // ^ Files are used to store data permanentaly 
    // * Stream - 
    // ^ Stream is an abstraction that represents a device on which input and output operations are performed
    // ^ for file handling we need to import a header file called fstream (above (line - 10))

    // * Taking user input -
    // ~ Method 1 -
    // ! In order to input values comment out the above code - 
    char arr[100];
    cout << "Enter your name and age" << endl;
    cin.getline(arr, 100); // ^ Using getline function to get the full line as input

    ofstream myfile("UserData.txt", ios::app); // ^ Using "ios::app" argument to append the file and not delete the previous input and add the new input whenever the file runs
    // ^ Putting the text in inputted text in the file -
    myfile << arr;
    // ^ Closing and saving the file -
    myfile.close();
    cout << "File write operation performed successfully"<< endl<< endl;

    // * Displaying the contents of the file - 
    char arrData[100];
    cout << "READING FROM FILE OPERATION STARTED" << endl;
    ifstream obj("UserData.txt");
    obj.getline(arrData, 100);
    cout << "Array content: " << arrData << endl;
    cout << "File read operation completed" << endl;

    // ~ Method 2 - 

    // * Taking user input -
    string UserName, UserDesc;
    cout << "Enter you name and briefly describe yourself: " << endl;
    getline(cin, UserName); // ^ Using getline function to get the full line as input
    getline(cin, UserDesc); // ^ Using getline function to get the full line as input

    // ^ Opening the file - 
    ofstream fileWrite("UserData2.txt", ios::app); // ^ Using "ios::app" argument to append the file  and not delete the previous input and add the new input whenever the file runs
    // ^ Putting the text in inputted text in the file - 
    fileWrite<<UserName << ": " << UserDesc << endl;
    // ^ Closing and saving the file -
    fileWrite.close();

    // * Displaying the contents of the file - 
    string fileTextStore;
    ifstream fileRead ("UserData2.txt");
    if (fileRead.is_open())
    {
        while ( getline (fileRead, fileTextStore) )
        {
            cout << fileTextStore << '\n';
        }
    fileRead.close();
    }

    else cout << "Unable to open file";

    // & Structures (structure created above (line - 118)) -
    // ^ User defined data types are known as structures -
    // ! classes are used insted of structures 
    person p1;
    cout << "Enter your name, age and favourite number: " << endl;
    cout << "Enter your name: " << endl;
    cin.getline(p1.userName, 100);
    cout << "Enter your age: " << endl;
    cin >> p1.age;
    cout << "Enter you favourite number" << endl;
    cin >> p1.favouriteNumber;

    cout << "Your details: " << endl << "Name: " << p1.userName << endl << "Age: " << p1.age << endl << "Favourite number: " << p1.favouriteNumber << endl;

    // ^ CREATE A PROGRAM IN WHICH USER ENTER NUMBER OF USERS AND THEN INPUT NAME, AGE, FAV NO, FOR EACH PERSON 
    person * userInputArray; // ^ structure defined above (line-118)
    int sizeOfArray;
    cout << "Enter number of users to be created: " << endl;
    cin >> sizeOfArray;
    userInputArray = new person[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout<<"Enter in order name, age, favNo: \n";
        cin>>userInputArray[i].userName;
        cin>>userInputArray[i].age;
        cin>>userInputArray[i].favouriteNumber;
    }

    cout<<"Entered details are: \n";

     for (int i = 0; i < sizeOfArray; i++)
    {
        cout<<userInputArray[i].userName<<endl;
        cout<<userInputArray[i].age<<endl;
        cout<<userInputArray[i].favouriteNumber<<endl;
    }

    // & Object oriented programming (OOP) - 
    cout << "OOPS" << endl;
    /* 
    ^ OOP - is an approach that provides a way of modularizing programs by creating 
    ^ partitioned memory area for both data and functions that can be used as a 
    ^ template(class) for creating of such modules on demand (objects). 
    
    ! Difference between OOP and POP -
    ^ 1. A program is divided to objects and their interactions.   |   1. A program is divided into funtions and they interacts.
    ^ 2. Inheritance is supported.                                 |   2. Inheritance is  not supported.
    ^ 3. Data is hidden.                                           |   3. Data is globally accessible.
     */

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

    // ~ Constructors (constructor declared above (line - 137)) - 
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

    // ~ Destructors (Destructor declared above (line - 194)) -
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
    // & Operator overloading -
    // ^ basically user defined operators
    /* 
    ^ Syntax -
    ^ void operator +()         {     
    ^       num = num+6;     
    ^  } 
    */ 
    // ^ You can use this your class for detailed info open this link - https://www.javatpoint.com/cpp-overloading
    // & Inheritance (base class declared above (line - 227), child class declared above (line - 245)) -
    // ^ Inheritance allows to define a class in terms of another class 
    // ^ FOR DETAILED EXPLAINATION WATCH SIMPLE SNIPPETS VIDEO (C++ SERIES (VIDEOS - 33-35))
    
    // & Function overriding (Class declared above (line - 256))- 
    cout << "Function overriding" << endl;
    /*
    ^ If derived class defines same function as defined in its base class, it is known as function overriding.
    ^ If you create an object of the derived class and call the member function which exists in both classes 
    ^ (base and derived), the member function of the derived class is invoked and the function of the base class is ignored
    */
    // ! In function overriding the function and its parameters and return type should be same only the inside code should be different
    // ^ Calling all same member functions of the classes -
    Shapes_FunctionOverridingExample shOverridng;
    shOverridng.area();
    Rectangle_FunctionOverridingExample rectOverriding;
    rectOverriding.area();
    Square_FunctionOverridingExample sq;
    sq.area();

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
    // ~ Multi level inheritance - 1 base class and 1 child classes and 1 more child class inheriting from above child class
    // ~ Multiple inheritance - 2 base classes and 1 child class 

    // ~ Hierarchial inheritance - 1 base class and 3 child classes 
    // ~ Hybrid inheritance - 1 base and 2 child classes and 1 more child class inheriting from 2 child class

    // * Polymorphism -
    /* 
    ^ It means having many forms
    ^ It is mainly divided into two types -
    ^                                                   POLYMORPHISM
    !                                                /               \
    !                                              /                  \
    ^                               Compile time polymorphism      Run time polymorphism
    !                                 /         |        \                   |
    !                                /         |         \                  |
    ^                           Function    operator   Templates      Function overriding
    ^                          overloading  overloading
    */
    // ~ Virtual function (classes and function declared above (line - 295)) -
    /*
    ^ A virtual function is a member function which is declared within base
    ^ class and is re-defined (Overridden) by derived class.
    ^ When you refer to a derived class object using a pointer or a
    ^ reference to the base class, you can call a virtual function for that
    ^ object and execute the derived class's version of the function.
    ^ Virtual functions ensure that the correct function is called for an object,
    ^ regardless of the type of reference (or pointer) used for function call.
    ^ They are mainly used to achieve Runtime polymorphism
    ^ Functions are declared with a virtual keyword in base class.
    ^ The resolving of function call is done at Run-time.
    */
    //  ^ creating object of the class and calling its member function -
    Animal *ptr;

    Animal objAnimal;
    ptr = &objAnimal;
    ptr->food();

    Cat objCat;
    ptr = &objCat;
    ptr->food();

    Dog objDog;
    ptr = &objDog;
    ptr->food();


    cout << sizeof(ptr) << endl;

    Animal an;
    an.food();
 
    Cat cn;
    cn.food();

    Dog d;
    d.food();
    cout << sizeof(an) + sizeof(cn) + sizeof(d)<< endl;
    // * Dynamic binding -
    // * Message passing -

    return 0;
}
