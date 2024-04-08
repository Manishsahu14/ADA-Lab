#include<iostream>
using namespace std;

int binarySearch(int arr[], int first, int last, int element)
{
    while(first <= last){
        int mid = first + (last-first)/2;
        if(arr[mid]==element)
           return mid;
        if(arr[mid]<element)
           first= mid+1;
        else
           last=mid-1;
    }
    return -1;
}
int main(){
    int arr[7]={12, 25, 36, 45, 56, 18, 90};
    int element;
    cout<<"Enter element for search:"<<endl;
    cin>>element;
    int first=0, last=6;
    int result = binarySearch(arr, first, last, element);
    if(result==-1)
    {
        cout<<"element is not present in array:";
    }
    else{
        cout<<"the element is found at index:"<<result;
    }
    return 0;
}