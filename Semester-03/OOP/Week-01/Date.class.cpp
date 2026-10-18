
#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

public:
    // Mutator functions with input validation
    void setMonth(int m)
    {
        if (m >= 1 && m <= 12)
            month = m;
        else
        {
            cout << "Invalid month! Enter month (1-12): ";
            cin >> m;

            while (m < 1 || m > 12)
            {
                cout << "Invalid month! Enter again: ";
                cin >> m;
            }

            month = m;
        }
    }

    void setDay(int d)
    {
        while (d < 1 || d > 31)
        {
            cout << "Invalid day! Enter day (1-31): ";
            cin >> d;
        }

        day = d;
    }

    void setYear(int y)
    {
        year = y;
    }

    // Display as MM/DD/YYYY
    void displayFormat1()
    {
        cout << month << "/" << day << "/" << year << endl;
    }

    // Display as Month DD, YYYY
    void displayFormat2()
    {
        string months[] = {
            "January", "February", "March", "April",
            "May", "June", "July", "August",
            "September", "October", "November", "December"
        };

        cout << months[month - 1] << " "
             << day << ", " << year << endl;
    }

    // Display as DD Month YYYY
    void displayFormat3()
    {
        string months[] = {
            "January", "February", "March", "April",
            "May", "June", "July", "August",
            "September", "October", "November", "December"
        };

        cout << day << " " << months[month - 1]
             << " " << year << endl;
    }
};

int main()
{
    Date d;

    int m, day, y;

    cout << "Enter month: ";
    cin >> m;
    d.setMonth(m);

    cout << "Enter day: ";
    cin >> day;
    d.setDay(day);

    cout << "Enter year: ";
    cin >> y;
    d.setYear(y);

    cout << "\nDate in three formats:\n";

    d.displayFormat1();
    d.displayFormat2();
    d.displayFormat3();

    return 0;
}

