#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

#define MAP_SIZE USHRT_MAX
#define OFFSET MAP_SIZE/2
void Map_sort(vector<int> &nums)
{
    vector<int> temp;
    int arr[MAP_SIZE];
    int maxElement = SHRT_MIN;
    int minElement = SHRT_MAX;
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
        arr[nums[i]+OFFSET]++;
        
    }
    int j=0;
    for(int i=minElement; i<= maxElement; i++ )
    {
        if (arr[i+OFFSET] >= 1) { 
            for (int count = 0; count < arr[i+OFFSET]; count++) 
            { 
                nums[j++] = i;
            }
        }
    }
    
}

int main()
{
    vector<int> nums{89, 77, 66, 55, 33, 44, 22, -11, 89 };
    Map_sort(nums);
    for(auto &x: nums)
    {
        cout << x<< " ";
    }
    
    return 0;
}  