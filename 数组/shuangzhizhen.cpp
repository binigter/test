#include <iostream>
#include <vector>

using namespace std;

class shuangzhizhen
{
private:
    /* data */
public:
    shuangzhizhen(/* args */);
    ~shuangzhizhen();

    vector<int> sortedSquare(vector<int>& nums)
    {
        int n = nums.size();
        int k = n-1;
        vector<int> ans(n, 0);
        for (int i = 0, j = n-1; i <= j;)
        {       
            if (nums[i]*nums[i] > nums[j]*nums[j])
            {
                ans[k]=nums[i]*nums[i];
                i++;
                k--;
            }
            else
            {
                ans[k]=nums[j]*nums[j];
                j--;
                k--;
            }
                            
        }
        return ans;
        
    }
};

shuangzhizhen::shuangzhizhen(/* args */)
{
}

shuangzhizhen::~shuangzhizhen()
{
}


int main()
{
    shuangzhizhen s;
    vector<int> nums={-7,-5,0,1,3};

    vector<int> ans=s.sortedSquare(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}