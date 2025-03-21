#include <stdio.h>
#include <limits.h>

#define MAP_SIZE USHRT_MAX
#define OFFSET MAP_SIZE/2
void Map_sort(int nums[],int length)
{
    int arr[MAP_SIZE]={0};
    int maxElement = SHRT_MIN;
    int minElement = SHRT_MAX;
    for(int i=0; i<length; i++)
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
    int nums[] = {89, 77, 66, 55, 33, 44, 22, -11, 89 };
    int len = sizeof(nums)/sizeof(nums[0]);
    Map_sort(nums, len);
    for(int i=0;i< len; i++)
    {
        printf("%d ", nums[i]);
    }
    
    return 0;
}  