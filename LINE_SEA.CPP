#include<iostream.h>
#include<conio.h>
class array{
int a[10],n;
public:
void create();
void linear_search();
};

void array::create(){
int i;
cout<<"Enter the size of array\n";
cin>>n;
cout<<"Enter the elements\n";
for(i=1;i<=n;i++){
cin>>a[i];
}
}

void array::linear_search(){
int item,pos=-1;
cout<<"Enter the item to search\n";
cin>>item;
for(int i=1;i<=n;i++){
if(a[i]==item){
pos=i;
break;
}
}
if(pos==-1){
cout<<"Unsuccessful search\n";
}else{
cout<<"item is located at position "<<pos;
}
}

void main(){
clrscr();
array ob;
ob.create();
ob.linear_search();
getch();
}

