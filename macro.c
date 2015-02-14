#include <stdio.h>

#define FIL 50
#define CUAD(x) (x)*(x)
#define CUBO(x)  CUAD(x)*(x)

#define FAC(x) f=1;\
                for(i=1;i<=x;i++)\
                    f*=i


int main()
{
    int i;int f;
    FAC(3);
    printf("El factorial de 3 es = %d",f);
    printf("\n");
    return 0;
}
