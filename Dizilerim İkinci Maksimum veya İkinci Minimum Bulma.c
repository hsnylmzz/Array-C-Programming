#include <stdio.h>
#define size 8
int secondmax(int *param);
int secondmin(int *param);
int main() {
  int dizi[]={6,10,23,53,25,36,2,89,0};
  int result1=secondmax(dizi);
  int result2=secondmin(dizi);
  printf("Sayinin ikinci max degeri:%d\n",result1);
  printf("Sayinin ikinci min degeri:%d\n",result2);
  return 0;
}
int secondmax(int *param)
{
  int i,max=0,ikincimax=0;
  ikincimax=param[1];
  for(i=1;i<size;i++)
  {
    if(param[i]!=0 && param[i]<max)
    {
      ikincimax=max;
      max=param[i];
    }
    else if(param[i]!=0 && param[i]<ikincimax)
    {
      ikincimax=param[i];
    }
  }
  return ikincimax;
}
int secondmin(int *param)
{
  int i,min=0,ikincimin=0;
  ikincimin=param[1];
  for(i=1;i<size;i++)
  {
    if(param[i]!=0 && param[i]>min)
    {
      ikincimin=min;
      min=param[i];
    }
    else if(param[i]!=0 && param[i]>ikincimin)
    {
      ikincimin=param[i];
    }
  }
  return ikincimin;
}
