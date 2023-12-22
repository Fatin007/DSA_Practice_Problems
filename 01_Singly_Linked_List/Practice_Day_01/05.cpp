/*
   Practice Problem 5
   Take a singly linked list as input and check if the linked list is sorted in ascending order.

   Sample Input
   1 5 6 8 9 -1
   2 4 6 5 8 4 -1

   Sample Output
   YES
   NO
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

bool isSorted(node *head){
   node* tmp=head;
   while(tmp->next!=NULL){
      if(tmp->next->val<tmp->val){
         return false;
      }
      tmp=tmp->next;
   }
   return true;
}

int main(){
   node* head=NULL;
   node* tail=NULL;
   while(69){
      int x; cin>>x;
      if(x==-1) break;
      insert(head,tail,x);
   }
   if(isSorted(head)) cout<<"YES";
   else cout<<"NO";
}