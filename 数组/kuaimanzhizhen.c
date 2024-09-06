#include <stdio.h>

int removeElement(int* nums, int numsSize, int val)
{
    int slow = 0;
    for (int fast = 0; fast < numsSize; fast++)
    {
        if (val != nums[fast])
        {
            nums[slow] = nums[fast];
            slow++;
        }
        
    }
    return slow;
     
}

int main()
{
    int nums[10]={5,2,3,4,5,5,7,8,9,10};
    int val =5;

    int slow = removeElement(nums, sizeof(nums)/sizeof(nums[0]), val);

    for (int i = 0; i < slow; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}