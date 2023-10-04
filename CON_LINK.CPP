
//program to concatenate two linkedlists
#include<iostream.h>
#include<conio.h>
struct Node{
int item;
struct Node *next;
};
typedef struct Node node;
class linklist{
public:
int i,value;
node *start,*temp,*ptr;
void create();
void traversal();
void concantenate(linklist);
linklist(){
start = 0;
}
};
void linklist::create(){

cout<<"Enter item\n";
cin>>value;
ptr = new node;
ptr->item =value;
ptr->next = 0;
if(start==0){
start=ptr;
}else{
temp =start;
while(temp->next!=0)
	temp = temp->next;
temp->next = ptr;
}
}
void linklist::traversal(){
if(start==0){
cout<<"list is empty";
return;
}
ptr =start;
while(ptr!=0){
cout<<ptr->item<<" ";
ptr = ptr->next;
}
}

void linklist::concantenate(linklist ob){
if(start==0){
ob.traversal();
return; }
else if( ob.start ==0){
traversal();
return; }
else{
temp = start;
while(temp->next!=0){
temp=temp->next;
}
temp->next = ob.start;
}
cout<<"\nconcatenated list is:";
traversal();
}
void main(){
clrscr();
int m,n,i;
linklist a,b;
cout<<"Enter the number of nodes in first list\n";
cin>>m;
for(i=1;i<=m;i++){
a.create();
}
cout<<"Enter the number of nodes in the second list";
cin>>n;
for(i=1;i<=n;i++){
b.create();
}
cout<<"\nFirst list is: ";
a.traversal();
cout<<"\nSecond list is: ";
b.traversal();
a.concantenate(b);
getch();
}
