#include <stdio.h>
void findIndex(int *param,int size,int value);
int main() {
  int dizi[]={3,6,2,64,83,67,74,58,84,85,63,68};
  findIndex(dizi,12,83);
  return 0;
}
void findIndex(int *param,int size,int value)
{
  int i;
  for(i=0;i<size;i++)
  {
    if(value>param[i])
    {
      printf("Girilen indis %d.indiste daha buyuktur\n",i+1);
    }
    else if(value==param[i])
    {
      printf("Girilen indis %d.indiste esittir\n",i+1);
    }
    else
    {
      printf("Girilen indis %d.indiste daha kucuktur\n",i+1);
    }
  }
  
}
