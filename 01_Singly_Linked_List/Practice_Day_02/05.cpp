/*
    Practice Problem 4
     Take a singly linked list as input and sort 
     it in descending order. Then print the list.

    Sample Input
    1 4 5 2 7 -1
    20 40 30 10 50 60 -1

    Sample Output
    7 5 4 2 1
    60 50 40 30 20 10
*/
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int val;
        node *next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert(node *&head, node *&tail, int x){
    node *newNode=new node(x);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void print(node *head){
   node *tmp=head;
   while(tmp!=NULL){
      cout<<tmp->val<<" ";
      tmp=tmp->next;
   }
   cout<<endl;
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    while(69){
        int x; cin>>x;
        if(x==-1) break;
        insert(head,tail,x);
    }
    for(node *i=head; i->next!=NULL; i=i->next){
        for(node *j=i->next;j!=NULL; j=j->next){
            if(i->val<j->val){
                swap(i->val,j->val);
            }
        }
    }
    print(head);
}