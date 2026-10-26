#include <stdio.h>
 void main ()  
 { 
  int row Count,column Count,i,j;
  int first Matrix[10][10],second Matrix[10][10],result Matrix[10][10];
  printf("Number of rows of matrices to be added:");
scanf("%d,&row Count");

printf("Number of columns matrices to be added:");
scanf("%d,&column Count");

printf(":Elements of first matrix:/n");

  for(i=0;i<row Count;i++)
  for(j=0;j<column Count;j++)
  scanf("%d",&first Matrix[i][j]);

  printf("Elenents of second matrix:/n")

  for(i=0;i<row Count;i++)
  for(J=0;j<colunm Count;j++)
scanf("%d",&second Matrix[i][j]);

 printf("sum of entered matrices :/n");
  for(i=0;i<row Count;i++)
  {
    for(j=0;j<column Count;j++)
  {
    result Matrix[i][j]=frist Matrix[i][j]+second Matrix[i][j];
   printf("%d/t",result Matrix[i][j]);
  }
  printf("/n");
}
return 0;
 }