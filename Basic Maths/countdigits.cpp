#include <iostream>

using namespace std;


int count_dig(int num)
{
    int counter = 0;
    while(num!=0)
    {
        counter++;
        num = num/10;
    }
    return counter;
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
        cout<<count_dig(num);
    }

    return 0;
}