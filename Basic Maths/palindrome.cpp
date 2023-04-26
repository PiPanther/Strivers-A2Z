#include <iostream>

using namespace std;


int count_dig(int num)
{
    int number = 0;
    while(num!=0)
    {
        int temp = num%10;
        number = number*10 + temp;
        num = num/10;
    }
    return number;
}

int  main()
{
    cout<<"Enter the number of test cases"<< endl;
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        (num == count_dig(num)) ? cout<<"Palindrome" : cout<< "Not Palindrome";
    }

    return 0;
}