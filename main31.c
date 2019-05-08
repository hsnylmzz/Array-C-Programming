#include <stdio.h>
void myTranspose(int param1[][3],const int rows,const int columns,int
param2[][2]);
int main()
{
int myArray1[2][3]={{1, 2, 3},{0, -6, 7}};
int myArray2[3][2];
int index1,index2;
myTranspose(myArray1,2,3,myArray2);
printf("MATRIS TRANSPOZU:\n");
for(index1=0;index1<3;index1++)
{
   for(index2=0;index2<2;index2++)
   {
     printf("%d\t", myArray2[index1][index2]);
   }
  printf("\n");
}
return 0;
}
void myTranspose(int param1[][3],const int rows,const int columns,int
param2[][2])
{
  int i,j;
  for(i=0;i<columns;i++)
  {
    for(j=0;j<rows;j++)
    {
      param2[i][j]=param1[j][i];
    }
  }
}
//Bu C Büt 3.sorusunun cevabıdır.(1.öğretim olarak)
