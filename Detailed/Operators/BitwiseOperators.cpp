// ! (!) - Important comments valueable information
// & (&) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation  

#include<iostream>
using namespace std;
int main() 
{
    //& Bitwise operators(operations on bits(0s and 1s)) -
    
    //* int stores a total of 32 bits (4 bytes) - 0000....0010 represents the number 2
    //* the first bit(starting bit from left) represents the sign of the number i.e negative or positive
    //^ when the first bit is 1, the number is negative else it is positive i.e in the case of 0
    //^ to store a negative no. the compiler takes 2's compliment(1's compliment then add 1) 
    //^   of the bits so as to create the first bit negative 
    //! we use this convention because if we use a different method of storing negative numbers like
    //!   then the number zero will be in both negative and positive cases and hence will occupy some extra space
    //!   to prevent this from happening i.e to save some memory we use this convention

    //* and(&) - returns 1 only in the case 1,1 and not in the cases- 0,0; 1,0; 0,1  
    //*          (think of it as this and that, i.e true when both are true)

    cout << "(1&1): " << (1&1) << endl;
    cout << "(1&0): " << (1&0) << endl;
    cout << "(0&1): " << (0&1) << endl;
    cout << "(0&0): " << (0&0) << endl << endl;

    //* or(|) - returns 1 in the cases - 1,1; 0,1; 1,0 and not in the case 0,0 
    //*         (think of it as this or that, i.e true when either of them is true, also true when both are true)
    //! the conditions after any one condition returs true are not evaluated by the or operator
    //! i.e in the case of (1,0) it will not check the the second block as the first block is true

    cout << "(1|1): " << (1|1) << endl;
    cout << "(0|1): " << (0|1) << endl;
    cout << "(1|0): " << (0|1) << endl;
    cout << "(0|0): " << (0|0) << endl << endl;

    //* not(~) - inverts bits i.e converts true to false and vica verca (1 to 0 and 0 to 1)

    cout << "(~1): " << (~1) << endl;
    cout << "(~0): " << (~0) << endl << endl;

    //* xor(^) - returns 1 in the cases - 1,0; 0,1 and not in the cases - 1,1; 0,0
    //*          Only or i.e reutrns true only when one of the two is true        

    cout << "(1^1): " << (1^1) << endl;
    cout << "(0^1): " << (0^1) << endl;
    cout << "(1^0): " << (0^1) << endl;
    cout << "(0^0): " << (0^0) << endl << endl;


    //* Left shift(a<<b) shifts the bits of the number 'a' to the left side b times
    //^ 000....0011 = a (which is the number 3 in decimal system)
    //^ a<<2
    //^ 000..001100 (which is the number 12 in decimal system)
    //^ means multiplying by 2, b times for a small no.; in the case of a big no. left shift might convert the no. to negative - 
    //^ let a number be 00100...0001
    //^ now left shifting it by 2
    //^ 1000...0100 (which is a negative number)

    cout << (3<<2) << endl << endl;

    //* Similarly right shift(a>>b) shifts the bits of the number 'a' to the right side b time
    //^ means multiplying by 2, b time

    cout << (6>>2) << endl << endl;

    //* Post increment or decrement - i++ or i--
    //^ increments or decrements the value of the variable by one *after* this line of code has been executed i.e
    //^ this operator first uses the value then increment the value
    int i = 3;
    cout<< "value of i with post increment(initial value of i = 3): " << i++ << endl;
    cout<< "value of i after the line has been executed " << i << endl;

    //* Pre increment or decrement - i++ or i--
    //^ increments or decrements the value of the variable by one *when* this line of code has been executed i.e
    //^ this operator first increments then uses the value
    int j = 3;
    cout<< "value of j with pre increment(initial value of j = 3): " << ++j << endl;
    cout<< "value of j after the line has been executed " << j << endl;

    return 0;
}