#include<iostream>
using namespace std;
class New;
class New2;
class Practice
{
    int num1, num2;

    public:

        void input(int a,int b)
        {
            num1 = a;
            num2 = b; 
            cout<< "num1 is : " <<num1<<" and num2 is : "<< num2 << endl; 
        }
        void input()
        {
           cout << "Enter two numbers : "<< endl;
           cin >> num1;
           cin >> num2;
           cout<< "num1 is : " <<num1<<" and num2 is : "<< num2 << endl; 
        }

        int sum()
        {
            cout << "The sum is : " << num1 +num2 << endl;;
            return 0; 
        }

        void print()
        {
            cout << "num1 is "<< num1 << endl ;
            cout << "num2 is "<< num2 << endl ;
        }

        friend int fun(Practice);
};
class New :public Practice
{
    int a, b ;
    public:
        void pd()
        {
            cout << " pratik ";
        }
};
class New2 : public New
{
    
};
int fun(Practice o3)
{
    cout << o3.num1 * o3.num2 << endl ;
    return 0;

}
int main()
{
    int a, b;
    Practice o1, o2, o3 ;
    // cout << "Enter two numbers : ";
    // cin >>a >> b ;
    // o3.input(a, b);
    // o1.input();
    // // o1.sum();
    // o2.input();
    // // o2.sum();
    // // o1.sum(); 
    // cout << "for o1 : "<< endl ;
    // o1.print() ;
    // cout << "for o2 : "<< endl ;
    // o2.print() ;
    // cout << "for o3 : "<< endl ;
    // o3.print() ;
    // fun(o3);
    // New p1;
    // p1.input();
    // p1.sum();
    // p1.print();
    // p1.pd();
    New2 p2;
    p2.input();
    p2.sum();
  

    return 0;
}