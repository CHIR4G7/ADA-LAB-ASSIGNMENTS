#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st,int a)
{
    if(st.size()==0)
    {
        st.push(a):
    }
    else
    {
    int top = st.top();
    st.pop();
    insertAtBottom(st,top);
    st.push(a);
    }
}

void reversestack(stack<int> &st)
{
    //base case - when the stack gets empty we return.
    if(st.empty()==true)
    {
        return;
    }
    
    //at every recursive call we store the top elemtn in a variable seperately.
    int a = st.top();
    st.pop();
  
    //recursicely call until stack gets empty.
    reversestack(st);
    
    //onece its empty when we are returning we will put back the element storedd in the variable and hence the stack would be reversed.
    st.push(a);
}


//print the stack
void printStack(stack<int> &st)
{
     while(st.size()!=0)
    {
        cout << st.top();
        st.pop();
    }
}

 
int main()
{
    int n;
    cin >> n;

    //storing elements in a stack.
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }
   
    printStack(st);//before reversing
    reversestack(st);
    printStack(st);//after reversing
   
}

//TIME COMPLEXITY - O(N)
//because we are travelling the stack of n elements which will take O(N) and push and pop operations take O(1) time only.
