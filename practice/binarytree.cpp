#include<iostream>
#include<queue>
using namespace std;


class node
{ public:
   int data;
   node* left;
   node* right;
   node(int a)
   {
    this->data=a;
    this->left=NULL;
    this->right=NULL;
   }
};

node* buildtree(node* &root)
{   int rt;
    cout<<"Enter root value"<<endl;
    cin>>rt;
    root=new node(rt);
    if(rt==-1)
    return NULL;
    else
    {
      cout<<"Enter the left node value of"<<rt<<":  ";
      root->left=buildtree(root->left);
      cout<<"Enter the right node value of"<<rt<<":  ";
      root->right=buildtree(root->right);
      return root;
    }
    
}
queue<node*> qform(queue<node*> &q, node* root)
{     
      q.push(root);
      cout<<root->data<<"-";
      
    
    if(!q.empty())    
     {      
            node* temp=q.front();
            q.pop();
            if(temp->left!=NULL)
             qform(q,temp->left);
             if(temp->right!=NULL)
             qform(q,temp->right);

    
    }
   
    return q;
}
void printtreeleft(node* root)
{
    if (root==NULL)
    cout<<"Empty tree-no elements found"<<endl;
    else{
        queue<node*> q;
        qform(q,root);
         }
} 
queue<node*> qform2(queue<node*> &q, node* root)
{   q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {  
        node* temp=q.front();
        q.pop();
        if(temp==NULL)
        { cout<<endl;
          if(!q.empty())
          q.push(NULL);
        }
        else{
        cout<<temp->data;
        if(temp->left)
         q.push(temp->left);
        if(temp->right)
         q.push(temp->right);
        }
         
    }
    return q;
}


void printtreehier(node* root)
{
    if (root==NULL)
    cout<<"Empty tree-no elements found"<<endl;
    else{
         queue<node*> q;
         qform2(q,root);
    }
}



int main()
{   node* root=NULL;
    buildtree(root);
    //printtreeleft(root);    //[left prioritised tree printing]
    printtreehier(root);      //[hierarchial order tree printing]
    return 0;
}