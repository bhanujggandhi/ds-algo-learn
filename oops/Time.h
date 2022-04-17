#ifndef TIME_H // If Not Defined

// Define TIME_H header file. It is useful when we have a huge codebase having lots of header files and there is a chance of multiple declaration

#define TIME_H

// Time class definition
class Time
{
public:
    Time(); // Constructor
    // Below are member function
    void setTime(int, int, int); // Sets time
    void printUniversal();       // Prints UTC
    void printStandard();        // Prints IST

    // These private data variables can only be accessed by above four class member
private:
    int hour;
    int minute;
    int second;
}; // end Time class

#endif