#include<iostream>
using namespace std;


void printarr(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<endl;
 }
}

int main()
{   int d=34;int arr[5]={1,2,3,4,5};
    int *a=&d;
    cout<<*a<<d<<endl;
    a=arr;
    printarr(arr,5);
    //a=arr;
    cout<<*(++a);
    a=NULL;

    return 0;
}