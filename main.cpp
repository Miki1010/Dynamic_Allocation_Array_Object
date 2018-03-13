#include <iostream>
#include <stdlib.h>
using namespace std;

class Complex_Number
{
private:
    float real;
    float imaginary;
public:
    Complex_Number() : real(0.0),imaginary(0.0)      // DEFAULT CONSTRUCTOR INITIALISATION LIST
    {
        // real = 0.0 ,imaginary = 0.0 ;
    }
    void Set_complex(double r, double i)
    {
        real = r ;
        imaginary = i ;
    }
    double Get_real()
    {
        return real;
    }
    double Get_img()
    {
        return imaginary;
    }
    void print()
    {
        cout << "Real : " << real << " and Imaginary : " << imaginary <<endl;
    }
};

int main()
{
    Complex_Number * Dynamic = new Complex_Number[10];
    for(int i = 0; i <10; i++)
    {
        cout << "Printing out object:"<< i <<endl;
        Dynamic[i].print();
        cout << endl;
    }
    delete[] Dynamic;
    return 0;
}

