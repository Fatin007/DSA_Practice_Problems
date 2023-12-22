/*
   Practice Problem 1
   Take two singly linked lists as input and check if their sizes are same or not.

   Sample Input
   2 1 5 3 4 8 9 -1
   5 1 4 5 4 3 2 -1

   Sample Output
   YES
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

int size(node *head){
   node *tmp=head;
   int sz=0;
   while(tmp!=NULL){
      tmp=tmp->next;
      sz++;
   }
   return sz;
}

int main(){
   node* head=NULL;
   node* tail=NULL;
   node* head1=NULL;
   node* tail1=NULL;
   while(69){
      int x; cin>>x;
      if(x==-1) break;
      insert(head,tail,x);
   }
   while(69){
      int x; cin>>x;
      if(x==-1) break;
      insert(head1,tail1,x);
   }
   if(size(head)==size(head1)) cout<<"YES";
   else cout<<"NO";
}