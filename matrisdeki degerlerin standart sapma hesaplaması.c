#include <stdio.h>
#include <math.h>
void sapmabul(int matrix[][3],double row,double col);
int main() 
{
  int matris[3][3]={{1,2,5},{6,12,18},{34,21,16}};
  sapmabul(matris,3,3);
  return 0;
}
void sapmabul(int matrix[][3],double row,double col)
{
  int i,j;
  double toplam=0;
  double ort=0.0;
  double standart_sapma=0.0;
  double temptoplam=0.0;
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
       toplam+=matrix[i][j];
     }
  }
  ort=toplam/(row*col);
  printf("Matrisdeki Degerlerin Ortalamasi:%lf",ort);
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
       temptoplam+=pow(matrix[i][j]-ort,2);
     }
  }
  standart_sapma=sqrt((1/((row*col)-1))*temptoplam);
  printf("\nMatrisdeki Degerlerin Standart Sapmasi:%lf",standart_sapma);
}
