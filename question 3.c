#include<stdio.h>
#include<stdlib.h>
void FSBT(int**flights,int*cap){
int i,j;
for(i=0;i<3;i++){
for(j=0;j<cap[i];j++){
flights[i][j]=0;}}
while(1){
int f,seat,op;
printf("1-book 2-cancel 0-exit:");
scanf("%d",&op);
if(op==0){
break;}
printf("Flight(1-3):");
scanf("%d",&f);
f--;
if(f<0||f>2){
printf("Bad flight\n");
continue;}
printf("Seat(1-%d):",cap[f]);
scanf("%d",&seat);
seat--;
if(seat<0||seat>=cap[f]){
printf("Bad seat\n");
continue;}
if(op==1){
if(flights[f][seat]==1){
printf("Already booked\n");}
else{
flights[f][seat]=1;
printf("Booked\n");}}
else if(op==2){
if(flights[f][seat]==0){
printf("Already empty\n");}
else{
flights[f][seat]=0;
printf("Cancelled\n");}}}
for(i=0;i<3;i++){
int occ=0;
for(j=0;j<cap[i];j++){
if(flights[i][j]==1){
occ++;}}
printf("Flight %d occupied:%d\n",i+1,occ);}}
int main(){
int caps[3]={5,7,9},i,j;
int*fl[3];
for(i=0;i<3;i++){
fl[i]=(int*)malloc(sizeof(int)*caps[i]);
}
FSBT(fl,caps);
for(i=0;i<3;i++){
free(fl[i]);
}
return 0;
}
