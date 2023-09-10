#include<iostream.h>
#include<conio.h>

class array{

public:

int a[10],n;
void create();
void display();
void binary_search(int);
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
cout<<"Array is";
for(int i=1;i<=n;i++){
cout<<a[i]<<" ";
}
}

void array::binary_search(int item){
int beg,end,loc,mid;
beg=1;
end=n;
while(beg<=end){
mid = (beg+end)/2;
if(item==a[mid]){
loc = mid;
break;
}
else if(item<a[mid]){
end = mid-1;
}
else{
beg =mid+1;
}
}
if(beg>end){
cout<<"unsuccessful search";
}
else{
cout<<item<<"is found at"<<loc;
}
}

void main(){
array ob;
clrscr();
int item;
ob.create();
cout<<"Enter the value of item";
cin>>item;
ob.binary_search(item);
getch();

}

