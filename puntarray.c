#include<stdio.h>  //segundo concepto paso por referencia 


int main()
{
    int a [5] = {2,4,6,8,10};
    int *ptr;
    ptr = &a[0];

   
   for (int i = 0; i < 5; i++)
   {
    
    printf("arrelog [%d] = %d ", i, a [i]);
    //ptr = &a[i];
    printf("%d\n",*(ptr++));

   }
   

}
    