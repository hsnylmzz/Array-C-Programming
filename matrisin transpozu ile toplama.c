#include <stdio.h>
void matrixtranspose(int param[3][3],int row,int column,int transpose[3][3]);
void matrixsum(int param[3][3],int row,int column,int transpose[3][3]);
int main() {
  int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int tmatrix[3][3];
  matrixtranspose(matris,3,3,tmatrix);    // Kullanıcıdan Matrisin transpozu hesaplayan fonksiyonu çağırır.
  matrixsum(matris,3,3,tmatrix);          // Kullanıcıdan Matrisin transpozu hesaplayıp toplayan fonksiyonu çağırır.
 
  return 0;
}
void matrixtranspose(int param[3][3],int row,int column,int transpose[3][3])
{
  int i,j;
  printf("MATRİSİN TRANSPOZU\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
    {
      transpose[i][j]=param[j][i];
      printf("%d\t",transpose[i][j]);
    }
    printf("\n");
  }
}
void matrixsum(int param[3][3],int row,int column,int transpose[3][3])
{
  int i,j;
  int summatrix[3][3];
  for(i=0;i<row;i++)
  {
      for(j=0;j<column;j++)
        {
          transpose[i][j]=param[j][i];
        }
   }
  printf("\nMATRİSİN TOPLAMİ\n");
  if(row==column)
  {
    for(i=0;i<row;i++)
       {
         for(j=0;j<column;j++)
          {
             summatrix[i][j]=transpose[i][j]+param[i][j];
             printf("%d\t",summatrix[i][j]);
          }
           printf("\n");
       }
   }
    else 
     {
      printf("İslem Yapilamaz");
     }
}
