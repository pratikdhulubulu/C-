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

      void setData(string n, int r, float c)
      {
            name = n;
            roll = r;
            cgpa = c;
      }

      void display(void)
      {
            cout<< "name: "<< name<< endl;
            cout<< "roll: "<< roll<< endl;
            cout<< "cgpa: "<< cgpa<< endl;
            cout<< "PRN: "<< PRN<<endl;
      }

      void setPRN(void);
};

void Student :: setPRN(void)
{
      cout<< "Enter PRN: "<< endl;
      cin>> PRN;
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

      

      return 0;
}