// Algorithm Challenge
// 45 Month of the Year
// Converts a number (1-12) into its corresponding month abbreviation

#include <iostream>
using namespace std;

int main()
{
    int monthNumber;

    // Ask the user to enter a number representing a month
    cout << "Enter the number of the month (1-12): ";
    cin >> monthNumber;

    // Input validation: repeat until a valid number is entered
    while (monthNumber < 1 || monthNumber > 12)
    {
        cout << "The number is not correct. Please enter a number between 1 and 12: ";
        cin >> monthNumber;
    }

    // Map numbers to month abbreviations
    if (monthNumber == 1)
        cout << "Jan\n";
    else if (monthNumber == 2)
        cout << "Feb\n";
    else if (monthNumber == 3)
        cout << "Mar\n";
    else if (monthNumber == 4)
        cout << "Apr\n";
    else if (monthNumber == 5)
        cout << "May\n";
    else if (monthNumber == 6)
        cout << "Jun\n";
    else if (monthNumber == 7)
        cout << "Jul\n";
    else if (monthNumber == 8)
        cout << "Aug\n";
    else if (monthNumber == 9)
        cout << "Sep\n";
    else if (monthNumber == 10)
        cout << "Oct\n";
    else if (monthNumber == 11)
        cout << "Nov\n";
    else if (monthNumber == 12)
        cout << "Dec\n";

    return 0;
}
