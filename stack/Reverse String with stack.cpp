#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str= "Naseem";
    stack<char>s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        s.push(ch);   // all string push in stack 
        
    }
    string ans=" ";    //here make a variable to 
    while(!s.empty()) { // jab tk ye stack empty nhi hota
    char ch=s.top();   // character uthaya jo stack ke top per pada h
    ans.push_back(ch);   //character ko ans ke ander daal diya 
    s.pop();         // character ko stack se bhi hata diya 
    }
    
    cout<<"answer is "<<ans<<endl;
}

//  https://www.youtube.com/watch?v=BmZnJehDzyU&list=PLDzeHZWIZsTrhXYYtx4z8-u8zA-DzuVsj&index=2
