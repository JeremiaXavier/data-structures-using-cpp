#include<iostream.h>
#include<conio.h>
class array{
int a[10],n;
public:
void create();
void display();
void insertionsort();
};

void array:: create(){
cout<<"Enter the limit";
cin>>n;
cout<<"\nEnter the elements";
for(int i=1;i<=n;i++){
	cin>>a[i];
}
}
void array::display(){
  cout<<"\nArray is:\n";
for(int i=1;i<=n;i++){
	cout<<a[i]<<" ";
}
}
void array:: insertionsort(){
  for(int i=2;i<=n;i++){
      int temp =a[i];
       int j=i-1;
	while(a[j]>temp&&j>=1){
	a[j+1]=a[j];
	j=j-1;
	}
  a[j+1]=temp;
}
}
void main(){
clrscr();
array ob;
ob.create();
ob.display();
ob.insertionsort();
ob.display();
getch();
}
