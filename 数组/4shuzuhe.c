// ��1234��ѡ��3����ɲ��ظ�����λ��
#include <stdio.h>
 
int main()
{ 
    int n;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <=4; j++)
        {
            for (int k = 1; k <= 4; k++)
            {
                if (i!=j && i!=k && j!=k)
                {
                    n++;
                    printf("%d%d%d ",i,j,k);
                }
                
            }
            
        }
        
    }
    // printf("\n%d",n);
    return 0;
    
}