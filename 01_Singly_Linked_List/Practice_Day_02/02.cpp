/*
    Practice Problem 2
    Take a singly linked list as input and print the reverse of the linked list.

    Sample Input
    2 1 5 3 4 -1
    5 1 4 5 4 3 -1

    Sample Output
    4 3 5 1 2 
    3 4 5 4 1 5
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
    if(head==NULL) return;
    print(head->next);
    cout<<head->val<<" ";
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    while(69){
        int x; cin>>x;
        if(x==-1) break;
        insert(head,tail,x);
    }
    print(head);
}