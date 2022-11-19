//using binary approach.............

#include<iostream>
using namespace std;
int div_book(int arr[],int n,int ns)
{
    int start=0,end=0,tar=0,pag=0,count;
    for(int i=0;i<n;i++)
    {
        end+=arr[i];
    }
    while(end!=start)
    {   
        count=0;
        tar=start/2+end/2;
        cout<<"start: "<<start<<"   tar:  "<<tar<<"  end:  "<<end<<endl;
       
        for(int i=0;i<n;i++)
        {
            pag+=arr[i];
            if(pag>tar)
           {cout<<i<<endl; 
            cout<<pag<<">>"<<tar<<endl; 
            count++;
             pag=arr[i];
             cout<<i<<"->"<<arr[i]<<endl;
             cout<<tar<<":"<<count+1<<endl;
              //extra
              cout<<"fx"<<pag<<endl;
             
            
           }
           

          if (count==ns)
           { start=tar+1;
           
             break;
             

           }
           if(i==n-1)
           {
            end=tar-1;
            break;
  
           }
        }
        
    }
    
    cout<<end<<end;
    return end;

}
int main()
{   cout<<"\nhello "<<endl;
    int arr[5]={10,20,30,40,50};
    int ns=2;
    div_book(arr,5,ns);
    return 0;
}