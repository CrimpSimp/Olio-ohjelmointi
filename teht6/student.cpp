#include "student.h"

Student::Student(string n, int a)
{
    name = n;
    age = a;
    cout<<name<<" created. Their age is "<<a<<"\n";

}

void Student::setAge(int a)
{
    age = a;
}

void Student::setName(string n)
{
    name = n;
}

string Student::getName()
{
    //cout<<name<<endl;
    return name;
}

int Student::getAge()
{
   // cout<<"get age got: "<<age<<endl;
    return age;
}

void Student::printStudentInfo()
{
    cout<<"Name: "<<getName()<<endl;
    cout<<"Age: "<<getAge()<<endl;

}
