#include <iostream>
#include <vector>

using namespace std;

class huadongchuangkou
{
private:
    /* data */
public:
    huadongchuangkou(/* args */);
    ~huadongchuangkou();

    int minSubArrayLen(int target, vector<int>& nums)
    {
        int result = INT_MAX;
        int left = 0;
        int sum = 0;
        int subLen = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            sum += nums[right];
            while (sum >= target)
            {
                subLen = right - left + 1;
                result = result > subLen ? subLen : result;
                sum -= nums[left];
                left++;
            }
            
        }
        return result == INT_MAX ? 0 : result;
        
    }
};

huadongchuangkou::huadongchuangkou(/* args */)
{
}

huadongchuangkou::~huadongchuangkou()
{
}


int main()
{
    vector<int> nums = {2,3,1,2,4,3};
    huadongchuangkou h;
    cout << h.minSubArrayLen(7, nums) << endl;
}