#include<iostream>
#include<string>
using namespace std;

class Student
{
      private:

      string name;
      int roll;
      float cgpa;
      string PRN;

      public:

      void setData(string n, int r, float c);
      void display(void);
      void setPRN(void);

      //Friend Function Decleration
      //friend returnType funName(className object);
      friend void printPRN(Student obj);

      //Friend Class Declaration
      friend class Boy;
};

class Boy // Friend class of Student
{
      public:

      void printData(Student& obj)
      {     // Accessing the private members of Student class
            cout<< "boy name: "<< obj.name<< endl;
      }

};

//Friend Function Defination
void printPRN(Student obj)
{
      cout<< "PRN is: "<<obj.PRN << endl;
}

void Student :: setPRN(void)
{
      cout<< "Enter PRN: "<< endl;
      cin>> PRN;
}

void Student :: setData(string n, int r, float c)
{
      name = n;
      roll = r;
      cgpa = c;
}

void Student :: display(void)
{
      cout<< "name: "<< name<< endl;
      cout<< "roll: "<< roll<< endl;
      cout<< "cgpa: "<< cgpa<< endl;
      cout<< "PRN: "<< PRN<<endl;
}

int main()
{
      Student s1,s2;
      
      s1.setData("Pratik", 18, 7.96);
      s1.setPRN();
      s1.display();

      s2.setData("Dustin", 20, 9.99);
      s2.setPRN();
      s2.display();


      // calling friend function
      // functionName(objName);
      printPRN(s1);

      Boy b1;
      cout<<"Accessing the private members of Student class"<< endl;
      b1.printData(s1); // Accessing the private members of Student class


      return 0;
}