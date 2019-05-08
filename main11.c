#include <stdio.h>
void myStretch(int *param1, const int param2);
int main()
{
int myArray[] = {2,4,2,4,2,4};
int index;
myStretch(myArray, 6);
printf("GUNCELLENMIS DIZI: ");
for(index=0;index<6;index++)
 {
   printf("%d\t", myArray[index]);
 }
return 0;
}
void myStretch(int *param1, const int param2)
{
  int i,toplam,ort;
  for(i=0;i<param2;i++)
  {
    toplam+=param1[i];
  }
  ort=toplam/param2;
  for(i=0;i<param2;i++)
  {
    if(param1[i]<ort)
    {
      param1[i]=param1[i]-1;
    }
    else
    {
      param1[i]=param1[i]+1;
    }
  }
}
//Bu C Büt Sınavının 1.soru çözümüdür.(1.öğretim olarak)
