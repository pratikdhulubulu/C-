#include<iostream>
#include<string>
using namespace std;

class Employee
{
      private:

      string name;
      int id;
      float salary;

      public:

      Employee()
      {
            cout<< "Default Constructor"<< endl;
      }

      Employee(string n, int i, float s)
      {
            cout<< "Parametarised Constructor"<< endl;
            name = n;
            id = i;
            salary = s;
      }

      Employee(Employee &obj)
      {
            cout<< "User defined copy constructor"<< endl;
            name = obj.name;
            id = obj.id;
            salary = obj.salary;
      }

      // Destructor
      ~Employee()
      {
            cout<< "Destructor called"<< endl;
            // It will call after whole execution is done for each object
      }

      void display(void);
};

void Employee :: display(void)
{
      cout<< "name: "<< name<< endl;
      cout<< "id: "<< id<< endl;
      cout<< "salary: "<<salary<< endl;
}

int main()
{
      Employee Dustin; // Default constructor
      Employee Pratik("Pratik", 20 , 1000000000.0); // Prametarised constructor
      Dustin = Pratik;// Default copy constructor


      Employee Harry = Pratik;// User defined copy constructor

      Pratik.display();
      Dustin.display();
      Harry.display();

      return 0;
}