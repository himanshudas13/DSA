//finding the square root of a number using binaery search algo
#include<iostream>
using namespace std;

class numsq
{   public:
    float num;
    //int root_num;
    float temp=0;
    numsq()
    {   cout<<"\nEnter the desired number ";
        cin>>num;
        temp=num;
    }
    void find_rt();
  
};

void numsq::find_rt()
{
        int c=0;
        int rigt=num,left=0;
        while((temp*temp)!=num)
        {   
           
            int temp=(left+rigt)/2;
             if(temp*temp>num)
              rigt=temp;
           else if(temp*temp<num)
            left=temp;
           else if((temp*temp)==num)
            {cout<<temp;
            break;}
        }
    
}

int main()
{   cout<<"Hello world"<<endl;
    numsq n1;
    n1.find_rt();
    return 0;
}