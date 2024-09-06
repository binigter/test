#include <iostream>
#include <vector>

using namespace std;

class luoxuanzhizhen
{
private:
    /* data */
public:
    luoxuanzhizhen(/* args */);
    ~luoxuanzhizhen();

    vector<vector<int>> generationMatrix(int n)
    {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int startX = 0, startY = 0;
        int loop = n / 2;
        int mid = n / 2;
        int count = 1;
        int offset = 1;
        int i,j;
        while (loop--)
        {
            i = startX;
            j = startY;
            for (j; j < n - offset; j++)
            {
                ans[i][j] = count++;
            }
            for (i; i < n - offset; i++)
            {
                ans[i][j] = count++;
            }
            for (j; j > startY; j--)
            {
                ans[i][j] = count++;
            }
            for (i; i > startX; i--)
            {
                ans[i][j] = count++;
            }
            startX++;
            startY++;
            offset++;
        }
        if (n % 2)
        {
            ans[mid][mid] = count;
        }
        return ans;
    }
};

luoxuanzhizhen::luoxuanzhizhen(/* args */)
{
}

luoxuanzhizhen::~luoxuanzhizhen()
{
}


int main()
{
    luoxuanzhizhen l;
    vector<vector<int>> ans = l.generationMatrix(5);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}