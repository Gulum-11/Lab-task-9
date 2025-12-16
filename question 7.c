#include<stdio.h>
#include<stdlib.h>
void COMPACT(float avg[],int n){
int i;
for(i=0;i<n;i++){
printf("%d:%.2f\n",i+1,avg[i]);
}
}
void DETAILED(float m[][7],int n){
int i,j;
for(i=0;i<n;i++){
float sum=0;
for(j=0;j<7;j++){
sum+=m[i][j];
printf("v%dday%d:%.2f ",i+1,j+1,m[i][j]);}
printf("avg:%.2f\n",sum/7);}}
void VMT(float m[][7],int n,void(*report)()){
int j,i;
float avg[5];
for(i=0;i<n;i++){
float s=0;
for(j=0;j<7;j++){
s+=m[i][j];}
avg[i]=s/7;}
for(i=0;i<n;i++){
if(avg[i]>=18){
printf("Vehicle%d Efficient avg:%.2f\n",i+1,avg[i]);}
else if(avg[i]>=12){
printf("Vehicle%d Moderate avg:%.2f\n",i+1,avg[i]);}
else{
printf("Vehicle%d Poor avg:%.2f\n",i+1,avg[i]);}}
if(report==(void(*)())COMPACT){
COMPACT(avg,n);}
else if(report==(void(*)())DETAILED){
DETAILED((float(*)[7])m,n);}}
int main(){
int i,j;
float m[5][7];
for(i=0;i<5;i++){
for(j=0;j<7;j++){
printf("V%dD%d km/l:",i+1,j+1);
scanf("%f",&m[i][j]);}}
int choice;
printf("Report:1-compact 2-detailed:");
scanf("%d",&choice);
if(choice==1){
VMT(m,5,(void(*)())COMPACT);
}
else{
VMT(m,5,(void(*)())DETAILED);
}
return 0;
}
