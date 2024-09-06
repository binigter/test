#include <stdio.h>

int main(void)
{
    int s1, s2, s3, s, i, n;
    s1=0;
    s2=0;
    s3=1;
    printf("请输入一个数：");
    scanf_s("%d",&n);
    for (i=4; i<=n; i++)  
    {       
        s=s1+s2+s3;
        s1=s2;
        s2=s3;
        s3=s;
    }
    printf("输出是%d",s);
    return 0;
}
