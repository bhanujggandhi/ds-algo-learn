#include <iostream>
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
    void displayMessage()
    {
        cout << "Welcome to the the Grade Book" << endl;
    }
};

int main()
{
    GradeBook myGradeBook;        // Creating GradeBook class object
    myGradeBook.displayMessage(); // Calling member function using an object
}