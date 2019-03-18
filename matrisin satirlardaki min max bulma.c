#include <stdio.h>
void maximumrow(int param[][4],int param2,int param3);
void minimumrow(int param[][4],int param2,int param3);
int main() {
  int matris[3][4]={{1,-2,3,-4},{-5,6,-7,8},{9,-10,11,-12}};
  maximumrow(matris,3,4);
  minimumrow(matris,3,4);
  return 0;
}
void maximumrow(int param[][4],int param2,int param3)
{
   int i,j;
   int maxrow[param2];
   maxrow[0]=param[0][0];
   for(i=0;i<param2;i++)
   {
     for(j=0;j<param3;j++)
     {
        if(maxrow[i]<param[i][j])
        {
          maxrow[i]=param[i][j];
        }
     }
   }
   printf("Matrisin Satirlardaki Max Degerleri\n");
   for(i=0;i<param2;i++)
   {
     printf("%d.indisin max degeri:%d\t",i+1,maxrow[i]);
   }
}
void minimumrow(int param[][4],int param2,int param3)
{
   int i,j;
   int minrow[param2];
   minrow[0]=param[0][0];
   for(i=0;i<param2;i++)
   {
     for(j=0;j<param3;j++)
     {
        if(minrow[i]>param[i][j])
        {
          minrow[i]=param[i][j];
        }
     }
   }
   printf("\nMatrisin Satirlardaki Min Degerleri\n");
   for(i=0;i<param2;i++)
   {
     printf("%d.indisin min degeri:%d\t",i+1,minrow[i]);
   }
}
