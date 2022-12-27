#include<iostream>
using namespace std;


class nodex
{  public:
    int data;
    nodex* left;
    nodex* right;
    nodex(int a)
    {
        this->data=a;
        this->left=NULL;
        this->right=NULL;
    }
};

nodex* buildtree(nodex* root)
{   int a;
    cout<<"Enter value:"<<endl;
    cin>>a;
    root=new nodex(a);
    if(a==-1)
     return NULL;
    else
    { cout<<"enter value for left node of "<<a<<endl;
     root->left=buildtree(root->left);
     cout<<"enter value for right node of"<<a<<endl;
     root->right=buildtree(root->right);
     return root;
    }
}

void displaytree(nodex* root)
{   cout<<"abc";
    nodex p=*root;
    cout<<p.data;
       
}
int main()
{   nodex* tree=NULL;
    buildtree(tree);
    displaytree(tree);
    return 0;
}           