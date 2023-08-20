#include<iostream.h>
#include<conio.h>
class sparse{
public:
int a[10][10],r,c,t,b[10][10];
void create();
void display();
void sparse_imple();
void transpose();
};

void sparse::create(){
cout<<"Enter the rows and cols\n";
cin>>r>>c;
cout<<"Enter the elements\n";
for(int i=1;i<=r;i++){
for(int j=1;j<=c;j++){
cin>>a[i][j];
}
}
}

void sparse:: display(){
cout<<"-------Entered Matrix------------\n";
for(int i=1;i<=r;i++){
for(int j=1;j<=c;j++){
cout<<a[i][j]<<" " ;
}
cout<<"\n";
}
}
void sparse::sparse_imple(){
int i,j;
t=0;
p=2;
for(i=1;i<=r;i++){
for(j=1;j<=c;j++){
if(a[i][j]!=0){
b[p][1]=i;
b[p][2]=j;
b[p][3]=a[i][j];
}
}
}
b[1][1]=r;
b[1][2]=c;
b[1][3]=t;

for(int i=1;i<=t+1;i++){
for(int j=1;j<=3;j++){
cout<<b[i][j]<<" ";
}cout<<"\n";
}
}

void sparse::transpos(){
int st[10][10],t,k=2,i,j;
for(i=1;i<=c;i++){
for(j=1;j<=t+1;j++){
if(b[j][2]==i){
st[k][1]=b[j][2];
st[k][2]=b[j][1];
st[k][3]=b[j][3];
k++;
}
}
}
st[1][1]=c;
st[1][2]=r;
st[1][3]=t;

for(i=1;i<=t+1;i++){
for(j=1;j<=3;j++){
cout<<a[i][j]<<" ";
}cout<<"\n";
}
}
void main(){
clrscr();
sparse ob;
ob.create();
ob.display();
ob.sparse();
ob.transpos();
getch();
}
		      d