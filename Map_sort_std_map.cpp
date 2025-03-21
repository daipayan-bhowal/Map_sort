#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

void Map_sort(vector<int> &nums)
{
    vector<int> temp;
    std::map<int,int> mp;
    int maxElement = INT_MIN;
    int minElement = INT_MAX;
    for(int i=0; i<nums.size(); i++)
    {
        if(maxElement < nums[i])
        {
            maxElement = nums[i];
        }
        if(minElement > nums[i])
        {
            minElement = nums[i];
        }
        mp[nums[i]]++;
        
    }
    int j=0;
    for(int i=minElement; i<= maxElement; i++ )
    {
        if (mp[i] >= 1) { 
            for (int count = 0; count < mp[i]; count++) 
            { 
                nums[j++] = i;
            }
        }
    }
    
}

int main()
{
    vector<int> nums{77,55,66,44,11,44,11,89,89 };
    Map_sort(nums);
    for(auto &x: nums)
    {
        cout << x<< " ";
    }
    
    return 0;
}  
