#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"printing of top element "<<s.top()<<endl;
    
    // check stack is empty or not
    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    
    // check the size of stack
    
    cout<<"size of stack is "<<s.size();
    
    
}
