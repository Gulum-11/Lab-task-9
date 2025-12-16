#include<stdio.h>
#include<stdlib.h>
float OSDS(float*p,int n){
float total=0;
for(int i=0;i<n;i++){
float price=*(p+i);
if(price<1000){
price=price-(price*10/100);
}
else if(price<=5000){
price=price-(price*15/100);
}
else{
price=price-(price*25/100);
}
total+=price;
}
return total;
}
int main(){
float arr[5];
for(int i=0;i<5;i++){
printf("Enter price %d:",i+1);
scanf("%f",&arr[i]);
}
float tot=OSDS(arr,5);
printf("Total after discounts:%.2f\n",tot);
return 0;
}
