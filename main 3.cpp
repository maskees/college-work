/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, discriminant, realpart, imaginarypart;
    int root1, root2;
    cout<<"Enter the variable a,b,c ";
    cin>>a>>b>>c;
    discriminant = b*b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (- b + sqrt (discriminant)) / (2 * a);
        root2 = (- b - sqrt (discriminant)) / (2 * a);
        cout<<"roots are real and different"<<endl;
        cout<<"root 1 is "<<root1<<endl;
        cout<<"root 2 is "<<root2<<endl;
    }
    else 
    if (discriminant == 0)
    {
        root1 = root2 = - b / (2 * a);
        cout<<"roots are real and same"<<endl;
        cout<<"root is "<<root1;
    
    }
    else 
    if (discriminant < 0)
    {
        root1 = ((- b / 2 * a) + (sqrt (discriminant)) / 2 * a);
        root2 = ((- b / 2 * a) - (sqrt (discriminant)) / 2 * a);
        cout<<"roots are imaginary "<<endl;
        cout<<"root 1 is "<<root1<<endl;
        cout<<"root 2 is "<<root2;
    }
    return 0;
}