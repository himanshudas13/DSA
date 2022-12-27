#include<iostream>
#include<stack>
using namespace std;


stack<int> getstak(stack<int> &s,int size)
{    cout<<"Enter values"<<endl;
     for(int i=0;i<size;i++)
    {
        int value;
        cin>>value;
        s.push(value);
    }
    return s;
}

void printstak(stack<int> s)
{
    while(!s.empty())
    {
        int value=s.top();
        cout<<value<<"-";
        s.pop();
    }
}

stack<int> solve(stack<int> &s,int size,int count)
{  
    if(count==size/2)
     {
        s.pop();
        return s;
     }
    int value=s.top();;
    s.pop();
    count++;
    solve(s,size,count);
    s.push(value);
    return s;
}

stack<int> delmid(stack<int> &s,int size)
{   solve(s,size,0);
    return s;
}

int main()
{   int* a=new int;
    stack<int>* s=new stack<int>;
    cout<<"Enter size of stack:"<<endl;
    cin>>*a;
    *s=getstak(*s,*a);
    printstak(*s);
    cout<<endl;
    *s=delmid(*s,*a);
    printstak(*s);

    return 0;
}