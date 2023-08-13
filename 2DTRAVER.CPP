#include<iostream.h>
#include<conio.h>
class array{
int a[10][10],r,c;
public:
void create();
void traversal();
};
	//function definitions

void array::create(){
cout<<"Enter the rows and cols\n";
cin>>r>>c;
cout<<"Enter the Elements";
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cin>>a[i][j];
	}
}
}

void array::traversal(){
cout<<"Array is\n";
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cout<<a[i][j]<<" ";
	}  cout<<"\n";
}
}
//main function

void main(){
clrscr();
array ob;
ob.create();
//traversal
ob.traversal();
getch();
}






