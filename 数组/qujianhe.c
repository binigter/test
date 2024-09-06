#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    int arr[n];
    int p[n];
    int persum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);   
        persum += arr[i];
        p[i] = persum;
    }

    while (scanf("%d%d", &a, &b))        
    {
        if (a == 0)
        {
            printf("%d\n", p[b]);
        }
        else
        {
            printf("%d\n", p[b] - p[a - 1]);
        }
        
    }
    
    
}