#include<iostream.h>
#include<conio.h>
class array{
int a[20],n;
public:
void create();
void display();
void selectionsort();
};

void array::create(){
cout<<"Enter the limit";
cin>>n;
cout<<"Enter the elements";
for(int i=1;i<=n;i++){
cin>>a[i];
}
}
void array::display(){
cout<<"\nArray is\n";
for(int i=1;i<=n;i++){
cout<<a[i]<<" ";
}
}
void array:: selectionsort(){
int small,loc;
for(int i=1;i<=n;i++){
small=a[i];
loc = i;
for(int j=i+1;j<=n;j++){
if(a[j]<small){
small=a[j];
loc=j;
}
}
int t=a[loc];
a[loc]=a[i];
a[i]=t;
}
}
void main(){
clrscr();
array ob;
ob.create();
ob.display();
ob.selectionsort();
ob.display();
getch();
}
