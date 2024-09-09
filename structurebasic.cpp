#include<iostream>
using namespace std;
 struct student
{
    int rn;
   string name;
    float gpa;
};
int main()
{
    student pratik;
    student suraj;
    pratik.rn=20;
    pratik.name="pratik";
    pratik.gpa=8.45;

    suraj.rn=31
    ;
    suraj.name="suraj";
    suraj.gpa=9.99;


    cout<<pratik.rn<<endl<<suraj.rn<<endl;
    cout<<pratik.name<<endl<<suraj.name<<endl;
    cout<<pratik.gpa<<endl<<suraj.gpa<<endl;
        return 0;
}