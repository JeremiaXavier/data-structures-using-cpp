#include<iostream.h>
#include<conio.h>
class array{
public:
int a[10],n;
void create();
void insert();
void display();
};
void array::create(){
	int i;
	cout<<"Enter the limit";
	cin>>n;
	cout<<"Enter the elements\n";
	for(i=1;i<=n;i++){
		cin>>a[i];
		}
}
void array::insert(){
	int pos=0,element=0;
	cout<<"enter the element to insert\n";
	cin>>element;
	cout<<"Enter the position to insert\n";
	cin>>pos;
	for(int i=n;i>=pos;i--){
	a[i+1]=a[i];
	}
	a[pos]=element;
	n++;
}
void array::display(){
	for(int i=1;i<=n;i++){
	cout<<a[i]<<" ";
}
}

void main(){
clrscr();
array ob;
ob.create();
ob.insert();
ob.display();
getch();

}





