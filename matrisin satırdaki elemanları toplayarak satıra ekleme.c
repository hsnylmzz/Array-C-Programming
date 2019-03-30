#include <stdio.h>
void matrixrowsum(int param[][4],int row,int column);
int main() {
  int matris[3][4]={{-1,2,-3,4},{5,6,-7,-8},{9,-10,11,-12}};
  matrixrowsum(matris,3,4);
  return 0;
}
void matrixrowsum(int param[][4],int row,int column)
{
  int i,j;
  int rowsum[3];
  int temp=0;
  for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
    {
      rowsum[i]+=param[i][j];
    }
  }
  for(i=0;i<row;i++)
  {
    printf("%i.satirin toplami:%d\n",i+1,rowsum[i]);
  }
  for(i=0;i<row;i++)
  {
     if(rowsum[i]>rowsum[i+1])
     {
       temp=rowsum[i+1];
       rowsum[i+1]=rowsum[i];
       rowsum[i]=temp;
     }
  }
  printf("Duzenlenmis Hali\n");
  for(i=0;i<row;i++)
  {
    printf("%i.satirin toplami:%d\n",i+1,rowsum[i]);
  }
}
