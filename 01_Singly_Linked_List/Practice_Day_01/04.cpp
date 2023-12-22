/*
   Practice Problem 2
   Take a singly linked list as input, then take q queries. 
   In each query you will be given an index and value. 
   You need to insert those values in the given index and 
   print the linked list. If the index is invalid print “Invalid”.

   Sample Input
   10 20 30 -1
   7
   1 40
   5 50
   4 50
   0 100
   7 40
   1 110
   7 40

   Sample Output
   10 40 20 30
   Invalid
   10 40 20 30 50
   100 10 40 20 30 50
   Invalid
   100 110 10 40 20 30 50
   100 110 10 40 20 30 50 40
*/
#include <bits/stdc++.h>
#define endl '\n'
#define Fatin ios_base::sync_with_stdio(false); cin.tie(NULL);
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

void insert_tail(node *&head, int v){
   node *newNode=new node(v);
   if(head==NULL){
      head=newNode;
      return;
   }
   node *tmp=head;
   while(tmp->next != NULL){
      tmp=tmp->next;
   }
   tmp->next=newNode;
}

void insert_head(node *&head, int v){
   node *newNode = new node(v);
   newNode->next=head; 
   head=newNode; 
}

bool insert_pos(node *&head,int pos, int v){
   node *newNode = new node(v);
   node *tmp = head;
   for(int i=1;i<=pos-1;i++){
      tmp=tmp->next;
      if(tmp==NULL){
         cout<<"Invalid\n";
         return false;
      }
   }
   newNode->next=tmp->next; 
   tmp->next=newNode; 
   return true;
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
   Fatin
   node* head=NULL;
   node* tail=NULL;
   while(69){
      int x; cin>>x;
      if(x==-1) break;
      insert_tail(head,x);
   }
   int q; cin>>q;
   while(q--){
      int pos,v; cin>>pos>>v;
      if(pos==0){
         insert_head(head,v);
         print(head);
      }
      else{
         if(insert_pos(head,pos,v)) print(head);
      }
   }
}