#include <stdio.h>
void myInitialize(int *param1, const int rows, const int columns);
int main()
{
int myArray[5][5];
int index1,index2;
myInitialize(&myArray[0][0], 5, 5);
printf("GUNCELLENMIS DIZI:\n");
for(index1=0;index1<5;index1++)
{
   for(index2=0;index2<5;index2++)
   {
     printf("%d\t", myArray[index1][index2]);
   }
  printf("\n");
}
return 0;
}
void myInitialize(int *param1, const int rows, const int columns)
{
  int i,j;
  for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
    {
      param1[i*rows+j]=i-j;
    }
  }
}
//Bu C Bütünleme Sınavının 2.Sorusunun Çözümüdür.(2.öğretim kısımları olarak)
