// https://leetcode.com/problems/merge-sorted-array/submissions/

#include <bits/stdc++.h>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n, int nums3[])
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (nums1[i] > nums2[j])
        {
            nums3[k] = nums2[j];
            k++;
            j++;
        }
        else
        {
            nums3[k] = nums1[i];
            k++;
            i++;
        }
    }

    while (i < m)
    {
        nums3[k++] = nums1[i++];
    }

    while (j < n)
    {
        nums3[k++] = nums2[j++];
    }

}

void print(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int m = 3, n = 3;
    int nums1[3] = {1, 2, 3};
    int nums2[3] = {2, 5, 6};
    int nums3[6];

    merge(nums1, m, nums2, n, nums3);

    print(nums3, 6);
}