#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n, int key){
    int start=0;
    int end=n-1;

    int mid= start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return -1;
}

int main()
{

    int arr[6]={5,7,8,10,12};
    int index= binarySearch(arr,6,10);
    cout<<index<<endl;

}
