include <stdio.h>
void myAddition(int param1[][2], int param2[][2], const int rows, const int columns);
int main()
{
int myArray1[2][2]={{0, 1},{0, 0}};
int myArray2[2][2]={{1, 2},{3, 4}};
int index1,index2;
myAddition(myArray1,myArray2,2,2);
printf("MATRIS TOPLAM SONUCU:\n");
for(index1=0;index1<2;index1++)
{
    for(index2=0;index2<2;index2++)
    {
      printf("%d\t", myArray1[index1][index2]);
    }
   printf("\n");
}
return 0;
}
void myAddition(int param1[][2], int param2[][2], const int rows, const int columns)
{
  int i,j;
  for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
    {
      param1[i][j]=param1[i][j]+param2[i][j];
    }
  }
}
// C Büt 3.sorusunun çözümüdür (2.öğretim olarak)
