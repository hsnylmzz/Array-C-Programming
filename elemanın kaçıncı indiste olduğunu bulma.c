#include <stdio.h>
int findIndex(int *param,int size,int value);
int main() {
  int dizi[]={3,6,2,64,83,67,74,58,84,85,63,68};
  int sonuc=findIndex(dizi,12,83);
  if(sonuc!=-1)
  {
     printf("ARADIGINIZ DIZININ ELEMANI %d.indiste",sonuc+1);
  }
  else
  {
     printf("ARADIGINIZ DIZININ ELEMANI BULUNAMADI");
  }
  return 0;
}
int findIndex(int *param,int size,int value)
{
  int i;
  for(i=0;i<size;i++)
  {
    if(value==param[i])
    {
      return i;
    }
  }
  return -1;
}
