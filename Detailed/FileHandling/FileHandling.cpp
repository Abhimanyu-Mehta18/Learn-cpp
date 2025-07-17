// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    // & File handling - 
    // * Files - 
    // ^ Files are used to store data permanentaly 
    // * Stream - 
    // ^ Stream is an abstraction that represents a device on which input and output operations are performed
    // ^ for file handling we need to import a header file called fstream (above (line - 10))

    // * Taking user input -
    // ~ Method 1 -
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

    return 0;
}