#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int n){
    this->data=n;
    this->left=NULL;
    this->right=NULL;
    }

};
node* tree(node* root)
{
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1)
    {
        return NULL;
    }
    cout<<"left"<<endl;
    root->left=tree(root->left);
    cout<<"right"<<endl;
    root->right=tree(root->right);
    return root;

}
void levelorder(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);


    while(!q.empty())
    {
         node* temp=q.front();
         q.pop();

         if(temp==NULL)
         {
             cout<<endl;
             if(!q.empty()){
                q.push(NULL);
             }

         }
         else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                    q.push(temp->right);

            }

         }
    }
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);

    int ans=max(left,right)+1;
    return ans;

}

int main(){
node* root=NULL;
root=tree(root);
levelorder(root);
cout<<"inorder is"<<endl;
inorder(root);
cout<<"preorder is"<<endl;
preorder(root);
cout<<"postorder is"<<endl;
postorder(root);
cout<<"height of tree is"<<endl;
int h=height(root);
cout<<h;

}


