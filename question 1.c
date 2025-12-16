#include<stdio.h>
#include<stdlib.h>
void ACDS(int amt,int*den){
int notes[]={5000,1000,500};
for(int i=0;i<3;i++){
den[i]=0;
}
for(int i=0;i<3;i++){
if(amt>=notes[i]){
den[i]=amt/notes[i];
amt=amt%notes[i];
}
}
}
int main(){
int amt,den[3];
printf("Enter withdrawal amount:");
scanf("%d",&amt);
if(amt%50!=0){
printf("Amount must be multiple of 50\n");
return 0;
}
ACDS(amt,den);
printf("5000:%d\n",den[0]);
printf("1000:%d\n",den[1]);
printf("500:%d\n",den[2]);
return 0;
}
