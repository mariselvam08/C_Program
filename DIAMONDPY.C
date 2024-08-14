#include<stdio.h>
#include<conio.h>

void main(){
int i,j,r,k;
clrscr();
printf("Enter number");
scanf("%d",&r);
for(i=1;i<=r;i++){
for(j=1;j<=r-i;j++){
printf(" ");
}
for(k=1;k<=(i);k++){
printf("* ");
}
printf("\n");
}
for(i=r-1;i>=1;i--){
for(j=r-i;j>=1;j--){
printf(" ");
}
for(k=i;k>=1;k--){
printf("* ");
}
printf("\n");
}
getch();
}
