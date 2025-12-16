#include<stdio.h>
#include<stdlib.h>
float VAL(int*price,int*stock,int n){
int i;
float tot=0;
for(i=0;i<n;i++){
tot+=price[i]*stock[i];
}
return tot;
}
float DISCOUNT(int*price,int*stock,int n){
int i;
float tot=0;
for(i=0;i<n;i++){
float val=price[i]*stock[i];
if(stock[i]<3){
}
else if(stock[i]<=5){
val=val-(val*10/100);
}
else{
val=val-(val*20/100);
}
tot+=val;
}
return tot;
}
int main(){
int p[5],s[5],i;
for(i=0;i<5;i++){
printf("Book%d price:",i+1);
scanf("%d",&p[i]);
printf("Copies:");
scanf("%d",&s[i]);
}
float before=VAL(p,s,5);
float after=DISCOUNT(p,s,5);
printf("Total before:%.2f\n",before);
printf("Total after:%.2f\n",after);
return 0;
}
