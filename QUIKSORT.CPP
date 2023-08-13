#include<iostream.h>
#include<conio.h>
class array{
int a[10];
public:
int n;
void create();  //Reading an array
void display();  //Displaying an array
void quiksort(int,int);
};

//function definitons
void array::create(){
cout<<"Enter the limit\n";
cin>>n;
cout<<"Enter the elements";
for(int i=1;i<=n;i++){
cin>>a[i];
}
}
void array::display(){
cout<<"\n Array is\n";
for(int i=1;i<=n;i++){
cout<<a[i]<<" ";
}
}
		//definition of quiksort

void array:: quiksort(int beg,int end){
int low,high,t,pivot;
if(beg<end){
pivot = beg;
low = beg;
high=end;
  while(low<high)
  {
	while(a[low]<=a[pivot]&&low<end)
		low++;
	while(a[high]>a[pivot])
		high--;
	if(low<high)
	{
		t=a[low];
		a[low]=a[high];
		a[high]=t;
	}
  }
 t=a[pivot];
 a[pivot]=a[high];
 a[high]=t;
 quiksort(beg,high-1);
 quiksort(high+1,end);
}
}
void main(){
clrscr();
int beg,end;
array ob;
ob.create();
beg =1;
end = ob.n;
ob.display();
ob.quiksort(beg,end);
ob.display();
getch();
}
