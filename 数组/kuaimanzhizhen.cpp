#include <iostream>
#include <vector>
using namespace std;

class kuaimanzhizhen
{
private:
    /* data */
public:
    kuaimanzhizhen(/* args */);
    ~kuaimanzhizhen();
    int removeElement(vector<int> &nums, int val)
    {
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++)
        {
            if (val != nums[fastIndex])
            {
                nums[slowIndex++] = nums[fastIndex];
            }
            
        }
        return slowIndex;
        
    }
};

kuaimanzhizhen::kuaimanzhizhen(/* args */)
{
}

kuaimanzhizhen::~kuaimanzhizhen()
{
}


class Solution {
    public:
    int removeElement(vector<int> &nums, int val)
    {
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++)
        {
            if (val != nums[fastIndex])
            {
                nums[slowIndex++] = nums[fastIndex];
            }
            
        }
        return slowIndex;
        
    }
};

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};

    // Solution s;
    // int n = s.removeElement(nums, 4);

    kuaimanzhizhen s;
    int n = s.removeElement(nums, 4);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
