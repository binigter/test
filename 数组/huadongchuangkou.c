#include <stdio.h>

int minSubArrayLen(int target, int* nums, int numsSize)
{
    int len = 0;
    int sum = 0;
    int result = __INT_MAX__;
    for (int left = 0, right = 0; right < numsSize; right++)
    {
        sum += nums[right];
        while (sum >= target)
        {
            len = right - left + 1;
            result = result > len ? len : result;
            sum -= nums[left];
            left++;
        }
        
    }
    return result == __INT_MAX__ ? 0 : result;
}

int main()
{
    int nums[6] = { 2,3,1,2,3,3 };
    int result = minSubArrayLen(7, nums, sizeof(nums) / sizeof(nums[0]));
    printf("%d\n", result);
}