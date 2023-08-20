#include<iostream.h>
#include<conio.h>

class sparse{
public:
int a[10][10], r,c;
void create();
void display();
void sparse_imple();
};

void sparse:: create(){
 cout<<"Enter the no of rows and cols";
cin>>r>>c;
cout<<"Enter the elements\n";
for(int i=1;i<=r;i++){
for(int j=1;j<=c;j++){
cin>>a[i][j];
}
}
}
void sparse:: sparse_imple(){
int i,j,b[10][10];
int t=0;
int p=2;
for(i=1;i<=r;i++){
for(j=1;j<=c;j++){
if( a[i][j]!=0 ){
b[p][1]=i;
b[p][2]=c;
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
for(j=1;j<=3;j++){
cout<<b[i][j]<<" ";
}
cout<<"\n";
}
}
void sparse::display(){
cout<<"entered matrix\n";
for(int i=1;i<=r;i++){
for(int j=1;j<=c;j++){
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
}
void main(){
clrscr();
sparse ob;
ob.create();
ob.display();
cout<<"-------------------------------\n";
cout<<"\tSparse matrix\n";
ob.sparse_imple();
getch();
}
