#include<iostream.h>
#include<conio.h>
class array{
public:
int a[10],n;
void create();
void display();
void deletion(int);
};
void array:: create(){
cout<<"Enter the limit\n";
cin>>n;
cout<<"Enter elements\n";
for(int i=1;i<=n;i++){
cin>>a[i];
}
}
void array::deletion(int pos){
       for(int i=pos;i<=n;i++){
	a[i]=a[i+1];
	}
	n--;
}
void array::display(){
	cout<<"New array\n";
	for(int i=1;i<=n;i++){
	cout<<a[i]<<" ";
	}
}



   void main(){
	clrscr();
	array ob;
	int pos;
	ob.create();
	cout<<"Enter the element position to delete\n";
	cin>>pos;
	ob.deletion(pos);
	ob.display();
	getch();
	}





