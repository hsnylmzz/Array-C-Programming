#include <stdio.h>
#include <math.h>
float fun(float x)
{
  return x*x*x+x*x+x+1;
}
void bisectionmethod(float *x, float a,float b,int *itr)
{
  *x=(a+b)/2;
  ++(*itr);
  printf("İterasyon sayisi: %d.X = %4f\n",*itr,*x);
}
int main() 
{
 int itr = 0, maxmitr;
    float x, a, b, allerr, x1;
    printf("\n a ve b  varsayian hata degeri ve max hata degerini yaziniz\n");
    scanf("%f %f %f %d", &a, &b, &allerr, &maxmitr);
    bisectionmethod (&x, a, b, &itr);
    do
    {
        if (fun(a)*fun(x) < 0)
            b=x;
        else
            a=x;
        bisectionmethod (&x1, a, b, &itr);
        if (fabs(x1-x) < allerr)
        {
            printf("%d iterasyon sonrasi, dongu = %6.4f\n", itr, x1);
            return 0;
        }
        x=x1;
    }
    while (itr < maxmitr);
    printf("İterasyon max degerden kucuk olacagindan cozum yapilamaz");
    return 0;
}
