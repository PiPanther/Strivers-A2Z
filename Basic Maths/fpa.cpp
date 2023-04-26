#include <iostream>
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        int counter = 0;
        int number = N;
        while(number!=0) {
            int temp = number%10;
            if(N%temp == 0 && temp!=0)
            counter++;
            number = number/10;
        }
        
        return counter;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends