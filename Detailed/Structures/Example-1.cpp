// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

struct person
{
    char userName[100];
    int age;
    int favouriteNumber;
};

int main()
{
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
    return 0;
}