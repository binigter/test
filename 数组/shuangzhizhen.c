#include <stdio.h>

void sortedSquare(int* nums, int numsSize)
{
    int left=0;
    int right=numsSize-1;
    int ans[numsSize];
    int index=numsSize-1;

    while (left <= right)
    {
        if (nums[left]*nums[left] > nums[right]*nums[right])
        {
            ans[index]=nums[left]*nums[left];
            left++;
            index--;
        }
        else
        {
            ans[index]=nums[right]*nums[right];
            right--;
            index--;
        }
        
        
    }
    for (int i=0; i<numsSize; i++)
    {
        printf("%d ", ans[i]);
    }
    
}

int main()
{
    int nums[5]={-3,-1,0,3,10};
    sortedSquare(nums, sizeof(nums)/sizeof(nums[0]));
    
}