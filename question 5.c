#include<stdio.h>
#include<stdlib.h>
void SAL(int(*att)[5],int students,int days){
int def=0,i,j;
for(i=0;i<students;i++){
int sum=0;
for(j=0;j<days;j++){
sum+=*(*(att+i)+j);}
float pct=(sum*100.0)/days;
if(pct<75){
def++;}
if(pct>=75){
printf("Stud%d:%.2f%% Good\n",i+1,pct);}
else if(pct>=50){
printf("Stud%d:%.2f%% Average\n",i+1,pct);}
else{
printf("Stud%d:%.2f%% Poor\n",i+1,pct);}}
printf("Total defaulters(<75%%):%d\n",def);}
int main(){
int s=30,d=5,i,j;
static int a[30][5];
for(i=0;i<s;i++){
for(j=0;j<d;j++){
printf("Stud%d Day%d(1/0):",i+1,j+1);
scanf("%d",&a[i][j]);}}
SAL(a,s,d);
return 0;
}
