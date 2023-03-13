/**
    * Progam will display the day of the week for any given date and will determine whether it's a leap year or not.
    * @author Jordan Davis
    * <pre>
    * fILE: DayFinder.cpp
    * Date: 2/22/23
    * Course: CSC1253 Section: 001
    * Programming Project #: 2
    * Instructor: Dr. Duncan
    * </pre>
    */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int monthNum;
    int dayOfMonth;
    int m = 0;
    int year;
    int day;
    int january = 1;int february = 2;int march = 3; int april = 4; int may = 5; int june = 6; int july = 7; int august = 8; int september = 9; int october = 10; int november = 11; int december = 12;
    int sun = 0;int mon = 1;int tues = 2;int wed = 3;int thurs = 4;int fri = 5;int sat = 6;
    string Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday;
    
    
    cout << "Enter numeric values for month, day and year -> " << endl;
    cin >> monthNum;
    cin >> dayOfMonth;
    cin >> year;
    
    if (monthNum == january)
    {
        m = 0;
    }
    if (monthNum == february)
    {
        m = 3;
    }
    if ((monthNum == march && year % 4 > 0) && year % 400 > 0)
    {
        m = 3;
    }
    else if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0 && monthNum == march))
    {
        m = 4;
    }
    if ((monthNum == april && year % 4 > 0) && year % 400 > 0)
    {
        m = 6;
    }
    else if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0 && monthNum == april))
    {
        m = 0;
    }
    if ((monthNum == may && year % 4 > 0) && year % 400 > 0)
    {
        m = 1;
    }
    else if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0 && monthNum == may))
    {
        m = 2;
    }
    if ((monthNum == june && year % 4 > 0) && year % 400 > 0)
    {
        m = 4;
    }
    else if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0 && monthNum == june))
    {
        m = 5;
    }
    if ((monthNum == july && year % 4 > 0) && year % 400 > 0)
    {
        m = 6;
    }
    else if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0 && monthNum == july))
    {
        m = 0;
    }
    if ((monthNum == august && year % 4 > 0) && year % 400 > 0)
    {
        m = 2;
    }
    else if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0 && monthNum == august))
    {
        m = 3;
    }
    if ((monthNum == september && year % 4 > 0) && year % 400 > 0)
    {
        m = 5;
    }
    else if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0 && monthNum == september))
    {
        m = 6;
    }
    if ((monthNum == october && year % 4 > 0) && year % 400 > 0)
    {
        m = 0;
    }
    else if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0 && monthNum == october))
    {
        m = 1;
    }
    if ((monthNum == november && year % 4 > 0) && year % 400 > 0)
    {
        m = 3;
    }
    else if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0 && monthNum == november))
    {
        m = 4;
    }
    if ((monthNum == december && year % 4 > 0) && year % 400 > 0)
    {
        m = 5;
    }
    else if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0 && monthNum == december))
    {
        m = 6;
    }
    
    day = (dayOfMonth + m + (5 * ((year - 1) % 4)) + (4 * ((year - 1) % 100)) + (6) * ((year - 1) % 400)) % 7;
    
    if (day == sun)
        cout << "Sunday, ";
    else if (day == mon)
        cout << "Monday, ";
    else if (day == tues)
        cout << "Tuesday, ";
    else if (day == wed)
        cout << "Wednesday, ";
    else if (day == thurs)
        cout << "Thursday, ";
    else if (day == fri)
        cout << "Friday, ";
    else if (day == sat)
        cout << "Saturday, ";
    
    if (monthNum == january)
    {
        cout << "January " << dayOfMonth << ", " << year;
    }
    else if (monthNum == february)
    {
        cout << "February " << dayOfMonth << ", " << year;
    }
    else if (monthNum == march)
    {
        cout << "March " << dayOfMonth << ", " << year;
    }
    else if (monthNum == april)
    {
        cout << "April " << dayOfMonth << ", " << year;
    }
    else if (monthNum == may)
    {
        cout << "May " << dayOfMonth << ", " << year;
    }
    else if (monthNum == june)
    {
        cout << "June " << dayOfMonth << ", " << year;
    }
    else if (monthNum == july)
    {
        cout << "July " << dayOfMonth << ", " << year;
    }
    else if (monthNum == august)
    {
        cout << "August " << dayOfMonth << ", " << year;
    }
    else if (monthNum == september)
    {
        cout << "September " << dayOfMonth << ", " << year;
    }
    else if (monthNum == october)
    {
        cout << "October " << dayOfMonth << ", " << year;
    }
    else if (monthNum == november)
    {
        cout << "November " << dayOfMonth << ", " << year;
    }
    else if (monthNum == december)
    {
        cout << "December " << dayOfMonth << ", " << year;
    }
    
    if (year % 400 == 0 || (year % 100 > 0 && year % 4 == 0))
    {
        cout << " (a leap year)" << endl;
    }
    else if ((year % 4 > 0) && year % 400 > 0)
    {
        cout << " (a non-leap year)" << endl;
    }
    
           return 0;
    }
