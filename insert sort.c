#include <stdio.h>
void insertsort(int *param,int size);
int main() {
  int dizi[10]={5,67,34,83,84,25,97,53,31,45};
  insertsort(dizi,10);
  return 0;
}
void insertsort(int *param,int size)
{
  int i,j,temp=0;
  for(i=0;i<size;i++)
  {
    temp=param[i];
    for(j=i;j>0 && temp<param[j-1];j--)
    {
      param[j]=param[j-1];
    }
    param[j]=temp;
  }
  printf("SIRALANMIS HALI: \n");
  for(i=0;i<size;i++)
  {
    printf("%d\t",param[i]);
  }
}
