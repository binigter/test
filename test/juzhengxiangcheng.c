#include <stdio.h>
#define N 3
#define M 4

// int c[N][N];
void xiangcheng(int a[N][M],int b[M][N])
{
    int c[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int sum=0;
            for (int k = 0; k < M; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        
    }
    
}
int main()
{
    int a[N][M]={{1,1,1,1},{1,1,1,1},{1,1,1,2}};
    int b[M][N]={{1,1,1},{1,1,1},{1,1,1},{1,1,1}};
    xiangcheng(a,b);
   
    return 0;
    
}