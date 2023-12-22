/*
    Practice Problem 4
    Take a singly linked list as input, 
    then print the maximum value of them.

    Sample Input
    2 4 1 3 5 4 2 5 -1
    5 4 1 2 5 6 8 4 1 3 -1

    Sample Output
    5
    8
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

int Max(node *head){
    node *tmp=head;
    int mx=-1;
    while(tmp!=NULL){
        mx=max(tmp->val,mx);
        tmp=tmp->next;
    }
    return mx;
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    while(69){
        int x; cin>>x;
        if(x==-1) break;
        insert(head,tail,x);
    }
    cout<<Max(head);
}