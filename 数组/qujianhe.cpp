#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    vector<int> nums(n);
    vector<int> p(n);
    int persum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        persum += nums[i];
        p[i] = persum;
    }
    while (cin >> a >> b)
    {
        if (a == 0)
        {
            cout << p[b] << endl;
        }
        else
        {
            cout << p[b] - p[a - 1] << endl;
        }
    }
    
    
}