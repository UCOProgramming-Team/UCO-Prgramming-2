a.	Employee
Employee is a struct data type that has the following attributes, or data members, or data fields

struct Employee {
string   	firstName;
string	lastName;
int		SSN;
string	department;
string	role;
double	salary;
};

b.	Create an employee DB with 3 employees by using dynamic array allocation. You can do hardcoding the information about the employees. 
c.	Define display() to display all the employee information on the console
d.	Define get_avg_salary() to compute the average salary of employees
e.	Release any dynamically allocated memory in your program without memory leak
f.	In the output of your program, display the address of each employee, address of all the local variables, the information of employees in a tabular format and the average salary.
g.	Apply indentations correctly to make your program readable.
h.	No need of classes/objects or makefile
i.	No need of makefile


#include <iostream>
#include <string>
using namespace std;

struct Employee // Apprently Struct is the same as a class but with not private variables. First time using one they seem cool
{
    string  firstName;
    string	lastName;
    int		SSN = 0;
    string	department;
    string	role;
    double	salary = 0;
};

void display(Employee data[]) // I may need to pass this by refrance
{
   
    int x = 3;
    for (int i = 0; i < x ; i++)
    {
        cout << data[i].firstName << endl;
        cout << data[i].lastName << endl;
        cout << data[i].SSN << endl;
        cout << data[i].department << endl;
        cout << data[i].role << endl;
        cout << data[i].salary << endl;
        if (i >= 0)
        {
            cout << endl << "Next Employee" << endl;
        }

    }
}double get_avg_Salery(Employee data[])
{
    int i = 0;
    double y;
    double avg;
    int x = 3;
    for ( i < x; i++;)
    {
        y =+ data[i].salary;
        
    }
    avg = y / i;

    return avg;

}
int main()
{
    struct Employee data[3];

    data[0] = { "Ethan", "Souders", 44312, "Math", "Tech", 54000 };
    data[1] = { "Kaylee", "Souders", 443156, "English", "Teacher", 43000 };
    data[2] = { "Evan", "Souders", 9995451, "Computer", "Tech", 60000 };
    Employee* p = &data[3];

    display(data);
    get_avg_Salery(data);

    //cout << (*p).firstName << endl; used as a test. I really should just use a reposirty 
    delete p; // This deletes it from the stack 

    return 0;
}


