#include <stdio.h>

int main()
{
   for (int i = 1; i <= 100000; i++)
   {
        int temp=i*(i-1);
        int m=1;
        while (m<=i)
        {
            m*=10;
        }
        if (temp%m==0)
        {
            printf("%d ",i);
        }
    
    }
   
}
