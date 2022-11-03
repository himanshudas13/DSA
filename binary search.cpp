#include<iostream>
include namespace std;


void fplp()
{
    cout<<"/n Enter arr size"<<endl;
    cin>>int size;
    int arr[size];
     cout<<"/n Enter arr elements"<<endl;
    for(int i=0;i<size;i++)
    { cin>>arr[i];}
    cout<<"Enter number to be searched"<<endl;
    cin>>int num;
    //binary search operation for position
    int mid=size/2,left=0,right=size-1;

    while(1)
    {
        if(arr[mid]>num)
         mid=left/2+mid/2;
        else if(arr[mid]<num)
         mid=right/2+mid/2;
        else if(arr[mid]==num)
         {cout<<mid;
         break;}
    }
}

int main()
{   fplp(); 
    return 0;
}