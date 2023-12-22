/*
   Practice Problem 2
   Take a singly linked list as input and check if the linked list contains 
   any duplicate value. You can assume that the maximum value will be 100.

   Sample Input
   5 4 8 6 2 1 -1
   2 4 5 6 7 4 -1

   Sample Output
   NO
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

bool duplicate(node *head){
   node* tmp=head;
   while(tmp!=NULL){
      node* now=tmp;
      while(now->next!=NULL){
         if(now->next->val==tmp->val){
            return true;
         }
         else now=now->next;
      }
      tmp=tmp->next;
   }
   return false;
}

int main(){
   node* head=NULL;
   node* tail=NULL;
   while(69){
      int x; cin>>x;
      if(x==-1) break;
      insert(head,tail,x);
   }
   if(duplicate(head)) cout<<"YES";
   else cout<<"NO";
}