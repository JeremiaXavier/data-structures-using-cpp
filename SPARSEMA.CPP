#include<iostream.h>
#include<conio.h>
class array{
int a[10][10],b[10][10],t,p,r,c;
public:
void create();
void display();
void sparse();
};

void array::create(){
cout<<"Enter the rows & cols\n";
cin>>r>>c;
cout<<"Enter the elements\n";
	for(int i=1;i<=r;i++){
	for(int j=1;j<=c;j++){
	cin>>a[i][j];
}
}
}



void array :: display(){
cout<<"matrix is\n";
for(int i=1;i<=r;i++){
	for(int j=1;j<=c;j++){
	cout<<a[i][j]<<" ";
	}
	cout<<"\n";
}
}



void array:: sparse(){
int i,j;
t=0;
p=2;
for( i=1;i<=r;i++){
	for(int j=1;j<=c;j++){
	if(a[i][j]!=0){
	b[p][1]=i;
	b[p][2]=j;
	b[p][3]=a[i][j];
	p++;
	t++;
	}
    }
  }
b[1][1]=r;
b[1][2]=c;
b[1][3]=t;
for(i=1;i<=t+1;i++){
	for(int j=1;j<=3;j++){
	cout<<b[i][j]<<" ";

	}
cout<<"\n";
}
}
void main()
{
array ob;
clrscr();
ob.create();
//ob.display();
ob.sparse();
getch();
}
