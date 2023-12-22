/*
   Practice Problem 3
   Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.

   Sample Input
   2 4 6 8 10 -1
   1 2 3 4 5 6 -1

   Sample Output
   6
   3 4
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

void mid(node *&head, int sz){
   if(sz==1){
      cout<<head->val;
      return;
   }
   node *tmp=head;
   for(int i=0;i<sz/2-1;i++){
      tmp=tmp->next;
   }
   if(sz&1) cout<<tmp->next->val;
   else cout<<tmp->val<<" "<<tmp->next->val;
}

int main(){
   node* head=NULL;
   node* tail=NULL;
   int sz=0;
   while(69){
      int x; cin>>x;
      if(x==-1) break;
      insert(head,tail,x);
      sz++;
   }
   mid(head,sz);
}