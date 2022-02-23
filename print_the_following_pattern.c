#include<stdio.h>
int main()
{
 int i,j,k,rows,count,temp=1;
 //printf("Enter number of rows:
");
 scanf("%d",&rows);
 count=rows-1;
 for(i=1;i<=rows;i++) 
{
 for(j=1;j<=count;j++) 
{
 printf(" ");
 
}
 for(k=1;k<=temp;k++) 
{
 printf("%d",i);
 
}
 count--;
 temp+=2;
 printf("
");
 
}

}