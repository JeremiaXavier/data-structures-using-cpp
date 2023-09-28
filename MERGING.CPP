#include<iostream.h>
#include<conio.h>
class array{
public:
int a[10],b[10],c[20],p,q,t;
void create();
void merge();

};
void array::create(){
int i;
cout<<"Enter the size of first array\n";
cin>>p;
cout<<"Enter the elements\n";
for(i=1;i<=p;i++){
cin>>a[i];
}
cout<<"Enter the size of second array\n";
cin>>q;
cout<<"Enter the elements\n";
for(i=1;i<=q;i++){
cin>>b[i];
}
}

void array:: merge(){
int m,n,o;
m=1;
n=1;
o=1;
while(m<=p&&n<=q){
if(a[m]<b[n]){
c[o]=a[m];
o++;
m++;

}
else{
c[o]=b[n];
n++;
o++;
}
}
while(m<=p){
c[o]=a[m];
o++;
m++;
}
while(n<=q){
c[o]=b[n];
o++;
n++;
}
t=p+q;
cout<<"merged array is\n";
for(int i=1;i<=t;i++){
cout<<c[i]<<" ";
}
}
void main(){
clrscr();
array ob;
ob.create();
ob.merge();
getch();
}




