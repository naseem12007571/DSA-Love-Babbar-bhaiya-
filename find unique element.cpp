int findUnique(int *arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans= ans^arr[i];
    }
    return ans;
}


compilor code

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int arr[7]={2,3,8,4,4,3,2};
    int ans=0;
    for(int i=0;i<7;i++){
        ans= ans^arr[i];       //XOR operatror use like 2^2=0 ye sab same element  ko xor krdega and 8 bachega
    }
    cout<<ans;
}



taka input from user 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cout<<"enter the number ";
    cin>>n;
    int arr[1000];     // arr[n]
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    
    cout<<ans;
}
