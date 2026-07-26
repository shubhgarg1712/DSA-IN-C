#include <stdio.h>

int removeDuplicates(int nums[], int numsSize)
{
    if (numsSize == 1)
    {
        return 1;
    }

    int i = 0;

    for (int j = 1; j < numsSize; j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}
