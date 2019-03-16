#include <stdio.h>
int modbulma(int *param,int size);
int main() {
  int dizi[10]={4,3,22,3,3,3,3,7,10,15};
  int result=modbulma(dizi,10);
  printf("%d.sayi tekrar edilmistir",result);
  return 0;
}
int modbulma(int *param,int size)
{
  int i,j;
  int value=0;
  int tekrar_sayi=0,mod=0;
  for(i=0;i<size;i++)
  {
    value=0;
    for(j=0;j<size;j++)
    {
       if(param[i]==param[j])
       {
         value++;
       }
       else if(value>tekrar_sayi)
       {
         tekrar_sayi=value;
         mod=param[i];
       }
    }
  }
  return mod;
}
