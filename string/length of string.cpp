#include<iostream>
using namespace std;
int main()

{
    
   char name[50];
   cout<<"Enter your name is ";
   cin>>name;
   int counter =0;
   for(int i=0;i<name[i]!='\0';i++){
       counter++;
   }
   
  cout<<counter;
    
}
