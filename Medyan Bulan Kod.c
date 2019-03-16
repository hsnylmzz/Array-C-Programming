#include <stdio.h>
void sort(int *param,int temp,int size);
int medyan(int *param,int size);
int main() {
  int dizi[10]={3,6,2,5,7,30,45,21,16,15};
  int yerdegistirme=0;
  sort(dizi,yerdegistirme,10);
  int sonuc=medyan(dizi,10);
  printf("%d",sonuc);
  return 0;
}
void sort(int *param,int temp,int size)
{
  int i,j;
  for(i=1;i<size;i++)
  {
    for(j=0;j<size-1;j++)
    {
      if(param[j]>param[j+1])
      {
        temp=param[j];
        param[j]=param[j+1];
        param[j+1]=temp;
      }
    }
  }
  printf("SİRALANMİS DİZİ:\n");
  for(i=0;i<size;i++)
  {
    printf("%3d",param[i]);
  }
  printf("\nMEDYAN:\n");
}
int medyan(int *param,int size)
{
  int i,mid=0;
  for(i=1;i<=size;i++)
  {
    if(size % 2==0)
    {
      mid=(param[size/2]+param[(size-1)/2])/2;
    }
    else if(size % 2 !=0)
    {
      mid=(param[size/2]);
    }
  }
  return mid;
}
