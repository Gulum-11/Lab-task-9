#include<stdio.h>
#include<stdlib.h>
void WDAN(float*data,int n){
int i;
float sum=0;
for(i=0;i<n;i++){
sum+=*(data+i);
}
float avg=sum/n;
int maxi=0;
for(i=1;i<n;i++){
if(*(data+i)>*(data+maxi)){
maxi=i;}}
int above=0;
for(i=0;i<n;i++){
if(*(data+i)>avg){
above++;}}
printf("Average:%.2f\n",avg);
printf("Max day:%d value:%.2f\n",maxi+1,*(data+maxi));
if(above>3){
printf("Rainy Week\n");}
else{
printf("Normal Week\n");}}
int main(){
int i;
float r[7];
for(i=0;i<7;i++){
printf("Day %d mm:",i+1);
scanf("%f",&r[i]);}
WDAN(r,7);
return 0;
}
