#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int power(int n,int k)
{
    //BASE CASE - if k==0 this will return 1 becuse 2 raised to power 0 willl be 1 itself.
    if(k==0)
    {
        return 1;
    }
    
    //SMALL CALCULATIONS
    int small = power(n,k-1);
    
    //RECURSCIVE CALL
    return n*small;
}
 
int main()
{
    int n,k;
    cin >> n >> k;

    cout << power(n,k);
}
