#include <iostream>
using namespace std;

int fact(int number)
{
   if(number>1) 
   return number*fact(number-1);
   else
   return 1;
}

int main()
{
    int number;
    cout << "Enter the number to find the factorial : ";
    cin>>number;
    int ans = fact(number);
    cout<<"The factorial of the entered number is : "<<ans;
    return 0;
}