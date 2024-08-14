#include<stdio.h>
#include<conio.h>

void main(){
int i,j,r;
clrscr();
printf("Enter number");
scanf("%d",&r);
for(i=r;i>=0;i--){
for(j=0;j<=i;j++){
printf("*");
}
printf("\n");
}
getch();
}