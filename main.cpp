#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
}*headA, *headB;
void sum()
{
    node* temp=head;
    int n;
    cin>>n;
    int sum=0;
    if(temp==NULL || n==0)
        return;
    while(temp!=NULL && n>0)
    {
        sum=sum+temp->data;
        temp=temp->next;
        n--;
    }
    if(n==0)
        cout<<sum;
}
void insert(int v)
{
    node* d=new node();
    d->data=v;
    d->next=NULL;
        if(head==NULL)
        {
            head=d;
        }
        else
        {
            node* t=head;
            while(t->next!=NULL)
            {
                t=t->next;
            }
            t->next=d;

        }
}
void del_at_beg()
{  if(head!=NULL)
    head=head->next;
}


void del_at_last()
{ if(head==NULL){return;}
    node*a=head;
    node*b=a->next;
    if(a->next==NULL){head=NULL;return;}
    while(b->next!=NULL)
    {   a=a->next;
        b=b->next;
    }
    a->next=NULL;
}


void print()
{
    node*t=head;
    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<"NULL"<<endl;

}
int s=0;
node* reverset(node* t)
{
    //cout<<++s<<endl;
    if(t!=NULL)
    {reverset(t->next);
        cout<<t->data<<"->";

    }

}
void insert_a_new_node(int pos,int v)
{
    node *temp=new node;
    temp->data=v;
    temp->next=NULL;
    node* prev=head;
    node* t=prev->next;
    if(pos==0)
    {
        temp->next=head;
        head=temp;
        return;
    }
    pos=pos-1;
    while(pos-- && temp!=NULL)
    {
        t=t->next;
        prev=prev->next;

    }
    prev->next=temp;
    temp->next=t;


}
int main()
{
    headA=headB=NULL;
    int n;
    cin>>n;
    while(n--)
    {
       int s;cin>>s;
       insert(s);
    }
    print();
    //sum();
    //int c;
   /* cin>>c;
    int value;
    cin>>value;
    insert_a_new_node(c,value);*/
    reverset(head);
  cout<<"NULL";
    //3print();
}
