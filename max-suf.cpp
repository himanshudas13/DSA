#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    
    i = 0; 
    j = 0;
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        
        int m = l + (r - l) / 2;
 
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
 
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int binarySearch(int a[],int c[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {        mid = (beg + end)/2;    

        if((a[mid] > val && a[mid-1]<val) && c[mid]==0 )
        {                 
            return mid;    
        }    
          
        else if(a[mid] < val)     
        {  
            return binarySearch(a, c, mid+1, end, val);    
        }    
           
        else     
        {  
            return binarySearch(a,c, beg, mid-1, val);    
        }          
    }    
    return -1;     
}

void maxindex(int A[],int B[],int size){
    int C[size];
    int D[size];
    int index;
    for (int i = 0; i < size; i++)
    {
        C[i]=0;
        D[i]=0;
    }
    for (int  i = 0; i < size; i++)
    {
        index=binarySearch(A,C,0,size,B[i]);
        if (index==-1)
        {
            continue;
        }
        else
        {
            D[i]=A[index];
            C[index]=1;
        }
        
        
    }
    int j=0,k=0;
    while (j<size && k<size)
    {
        if (C[j]==0 && D[k]==0)
        {
            D[k]=A[j];
            j++;
            k++;
        }else if (C[j]!=0 && D[k]!=0)
        {
            j++;
            k++;
        }else if (C[j]==0 && D[k]!=0)
        {
            k++;
        }
        else if(C[j]!=0 && D[k]==0)
        {
            j++;
        }
        
        
    }
    printArray(D,size);
    
}
int main(){
    int A[]={2,7,11,15};
    int B[]={1,10,4,11};
    mergeSort(A,0,3);
    maxindex(A,B,4);
    return 0;
}