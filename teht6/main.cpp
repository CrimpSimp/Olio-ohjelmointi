#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "student.h"
using namespace std;


int main ()
{
    int selection;
    string paramName;
    int paramAge = 0;
    string searchName;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:{
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout<<"Give a new name and age"<<endl;
            cin>>paramName;
            cin>>paramAge;
            // Lisää uusi student StudentList vektoriin.
            studentList.push_back(Student(paramName, paramAge));
            break;}

        case 1:{
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout<<"All students in vector: \n";
            for(auto it = studentList.begin(); it != studentList.end(); it++)  // iteraattori it on pointteri
            {
                cout<<it->getName()<<"\n";
            }
            break;}

        case 2:{
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b){
                return a.getName() < b.getName();
            });
            cout<<"Students sorted aplhabetically"<<endl;
            for (Student &Student : studentList)
            {
                Student.printStudentInfo();
                cout<<"\n";
            }
            break;}

        case 3:{
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b){
                return a.getAge() < b.getAge();
            });
            cout<<"Students sorted by age. Ascending order"<<endl;
            for (Student &Student : studentList)
            {
                Student.printStudentInfo();
                cout<<"\n";
            }
            break;}

        case 4:{
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout<<"Search for a student"<<endl;
            cin>>searchName;

            auto it = find_if(studentList.begin(),studentList.end(),[searchName](Student& obj){
                return searchName == obj.getName();});
            if(it != studentList.end())
            {
                cout<<"Student found \n";
                cout<<"\n";
                cout<<"Name: "<<it->getName()<<endl;
                cout<<"Age: "<<it->getAge()<<endl;
            }
            else
            {
                cout<<"Student not found"<<endl;
            }
            break;}

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;}

    }while(selection < 5);

 return 0;
}


