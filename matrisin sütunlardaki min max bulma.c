#include <stdio.h>
void maximumcolumn(int param[][4],int param2,int param3);
void minimumcolumn(int param[][4],int param2,int param3);
int main() {
  int matris[3][4]={{1,-2,3,-4},{-5,6,-7,8},{9,-10,11,-12}};
  maximumcolumn(matris,3,4);
  minimumcolumn(matris,3,4);
  return 0;
}
void maximumcolumn(int param[][4],int param2,int param3)
{
   int i,j;
   int maxcol[param3];
   maxcol[0]=param[0][0];
   for(i=0;i<param2;i++)
   {
     for(j=0;j<param3;j++)
     {
        if(maxcol[j]<param[i][j])
        {
          maxcol[j]=param[i][j];
        }
     }
   }
   printf("Matrisin Sutunlardaki Max Degerleri\n");
   for(j=0;j<param3;j++)
   {
     printf("%d.indisin max degeri:%d\t",j+1,maxcol[j]);
   }
}
void minimumcolumn(int param[][4],int param2,int param3)
{
   int i,j;
   int mincol[param3];
   mincol[0]=param[0][0];
   for(i=0;i<param2;i++)
   {
     for(j=0;j<param3;j++)
     {
        if(mincol[j]>param[i][j])
        {
          mincol[j]=param[i][j];
        }
     }
   }
   printf("\nMatrisin Sutunlardaki Min Degerleri\n");
   for(j=0;j<param3;j++)
   {
     printf("%d.indisin min degeri:%d\t",j+1,mincol[j]);
   }
}
