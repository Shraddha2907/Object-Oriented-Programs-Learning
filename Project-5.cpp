#include<iostream>
#include<fstream>
using namespace std;

class Employee
{
    char Name[20];
    int ID;
    double salary;
    public:
        void accept()
        {
            cin>>Name;
            cin>>ID;
            cin>>salary;
        }
        void display()
        {
            cout<<"\nEnter the name: "<<Name;
            cout<<"\nEnter the ID: "<<ID;
            cout<<"\nEnter the salary: "<<salary;
        }
};

int main()
{
    Employee o[5];
    fstream f;
    int i,n;

    f.open("b16.txt");
    cout<<"\nHow many employee information do you need to store?";
    cin>>n;
    cout<<"\nEnter information of employee in this format(NAME/ID/SALARY)";
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter information of:"<<i<<"\nEmployee";
        o[i].accept();
        f.write((char*)&o[i],sizeof o[i]);
    }

    f.close();

    f.open("b16.txt",ios::in);
    cout<<"\nInformation of Employee is as follows: ";
    for(i=0;i<n;i++)
    {
        f.write((char*)&o[i],sizeof o[i]);
        o[i].display();
    }
    f.close();

    return 0;
}
