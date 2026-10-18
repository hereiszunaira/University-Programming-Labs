
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Mutator functions
    void setName(string n)
    {
        name = n;
    }

    void setIdNumber(int id)
    {
        idNumber = id;
    }

    void setDepartment(string dept)
    {
        department = dept;
    }

    void setPosition(string pos)
    {
        position = pos;
    }

    // Accessor functions
    string getName()
    {
        return name;
    }

    int getIdNumber()
    {
        return idNumber;
    }

    string getDepartment()
    {
        return department;
    }

    string getPosition()
    {
        return position;
    }
};

int main()
{
    // Create three Employee objects
    Employee e1, e2, e3;

    // Store Susan's data
    e1.setName("Susan");
    e1.setIdNumber(47899);
    e1.setDepartment("Accounting");
    e1.setPosition("President");

    // Store Mark's data
    e2.setName("Mark");
    e2.setIdNumber(39119);
    e2.setDepartment("IT");
    e2.setPosition("Programmer");

    // Store Joy's data
    e3.setName("Joy");
    e3.setIdNumber(81774);
    e3.setDepartment("Manufacturing");
    e3.setPosition("Engineer");

    // Display Susan's data
    cout << "----- Employee 1 -----" << endl;
    cout << "Name: " << e1.getName() << endl;
    cout << "ID Number: " << e1.getIdNumber() << endl;
    cout << "Department: " << e1.getDepartment() << endl;
    cout << "Position: " << e1.getPosition() << endl;

    // Display Mark's data
    cout << "\n----- Employee 2 -----" << endl;
    cout << "Name: " << e2.getName() << endl;
    cout << "ID Number: " << e2.getIdNumber() << endl;
    cout << "Department: " << e2.getDepartment() << endl;
    cout << "Position: " << e2.getPosition() << endl;

    // Display Joy's data
    cout << "\n----- Employee 3 -----" << endl;
    cout << "Name: " << e3.getName() << endl;
    cout << "ID Number: " << e3.getIdNumber() << endl;
    cout << "Department: " << e3.getDepartment() << endl;
    cout << "Position: " << e3.getPosition() << endl;

    return 0;
}

