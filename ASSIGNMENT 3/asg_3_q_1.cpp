#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <stack>
using namespace std;

void reversestack(stack<int> &st)
{
    if(st.empty()==true)
    {
        return;
    }
    int a = st.top();
    st.pop();
    reversestack(st);
    st.push(a);
}
 
int main()
{
    int n;
    cin >> n;

    stack<int> st;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }
    while(st.size()!=0)
    {
        cout << st.top();
        st.pop();
    }
    
    reversestack(st);
   
}