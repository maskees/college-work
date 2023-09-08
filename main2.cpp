/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   double sales_amount, discount_1, discount_2, original_amount;
   cout<<"enter the original amount:";
   cin>>original_amount;
   if (original_amount>5000)
   {
       discount_1 = original_amount * 0.12;
       sales_amount = original_amount * 0.88;
       cout<<"the discount is:"<<discount_1<<endl;
       cout<<"the sales amount is:"<<sales_amount<<endl;
   }
   else
   {
       discount_2 = original_amount * 0.07;
       sales_amount = original_amount * 0.93;
       cout<<"the discount is:"<<discount_2<<endl;
       cout<<"the sales amount is:"<<sales_amount<<endl;
   }

    return 0;
}
