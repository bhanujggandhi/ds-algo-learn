#include <iostream>
#include <string>
using namespace std;

// Class Definition
class GradeBook
{
    // Access Specifier
    /*
    Public means all the members or functions inside public is accessbile to everyone, insite the code or outside the code.
    -> Anyone can create an object of this class and access public members
    */
public:
    void displayMessage(string courseName)
    {
        cout << "Welcome to the the Grade Book for\n    "
             << courseName << "!" << endl;
    }
};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook; // Creating GradeBook class object

    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse); // Reads acourse name with blanks
    // cin >> nameOfCourse; // This will read input till first whitespace
    cout << endl;

    myGradeBook.displayMessage(nameOfCourse); // Calling member function using an object
}