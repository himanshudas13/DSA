#include<iostream>
#include<queue>
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
nodex* buildtree(nodex* &root)
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
void printtree(nodex* tree)
{
  queue<nodex*> q;
  q.push(tree);
  while(!q.empty())
  {
    nodex* temp=q.front();
    cout<<temp->data;
    q.pop();
    if(q.front()==NULL)
    cout<<endl;
    if(temp->left)
    q.push(temp->left);
    if(temp->right)
    q.push(temp->right);

  }
}


int main()
{   nodex* tree=NULL;
    buildtree(tree);
   // levelordertraverse(tree);
   printtree(tree);
    return 0;
}           

