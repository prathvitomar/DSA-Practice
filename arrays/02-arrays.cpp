#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        i++;
    }
}

int findUnique(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                if (count < 1)
                {
                    break;
                }
            }
        }
        if (count == 1)
        {
            return arr[i];
        }
    }
}

bool containDuplicate(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }
    return false;
}

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]) - 1; // Use abs(nums[i]) to find the index

        if (nums[index] < 0)
        {
            result.push_back(abs(nums[i])); // If already negative, it's a duplicate
        }
        else
        {
            nums[index] = -nums[index]; // Mark the index as visited by negating
        }
    }

    return result;
}

vector<int> findIntersectionArray(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        if (nums1[i] < nums2[j])
        {
            i++;
        }
    }
    return ans;
}

vector<vector<int>> pairSum(vector<int> &nums1, int target)
{
    vector<vector<int>> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = i + 1; j < nums1.size(); j++)
        {
            if (nums1[i] + nums1[j] == target)
            {
                vector<int> temp;
                temp.push_back(min(nums1[i], nums1[j]));
                temp.push_back(max(nums1[i], nums1[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

vector<vector<int>> findTriplet(vector<int> &nums1, int target)
{
    vector<vector<int>> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = i + 1; j < nums1.size(); j++)
        {
            for (int k = j + 1; k < nums1.size(); k++)
            {
                if (nums1[i] + nums1[j] + nums1[k] == target)
                {
                    vector<int> temp = {nums1[i], nums1[j], nums1[k]};
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}


vector<int> zeroAndOnes(vector<int>& nums1) {
    int i = 0, j = nums1.size() - 1; 
    while (i < j) {
        if (nums1[i] == 0) {
            i++;  
        } else if (nums1[j] == 1) {
            j--;  
        } else {
            int temp = nums1[i];
            nums1[i] = nums1[j];
            nums1[j] = temp;
            i++;
            j--;
        }
    }
    return nums1;
}



int main()
{
    // int arr[15] = {7, 232, 32, 12, 9, 2, 12, 49, 98, 2, 67, 83, 91, 3, 8};
    // swapAlternate(arr, length);

    // int arr1[7] = {3, 1, 7, 1, 3, 4, 7};
    // int length = sizeof(arr1) / sizeof(arr1[0]);
    // int unique = findUnique(arr1, length);
    // cout << unique << endl;

    // int arr2[] = {3, 7, 1};
    // int length = sizeof(arr2) / sizeof(arr2[0]);
    // if (containDuplicate(arr2, length))
    // {
    //     cout << "true" << endl;
    // }
    // else
    // {
    //     cout << "false" << endl;
    // }

    // vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    // vector<int> duplicates = findDuplicates(nums);
    // cout << "Duplicates: ";
    // for (int num : duplicates) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // vector<int> nums1 = {1,2,3,3,4};
    // vector<int> nums2 = {2,3,4,6};
    // vector<int> intersections = findIntersectionArray(nums1, nums2);
    // cout << "Intersections : ";
    // for (int num : intersections) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // vector<int> nums1 = {1,2,3,3,4};
    // vector<vector<int>> pair = pairSum(nums1,5);
    // cout << "Pairs : ";
    // for (const vector<int>& p : pair) {
    //     cout << "(" << p[0] << ", " << p[1] << ") ";
    // }
    // cout << endl;



    // vector<int> nums1 = {1, 2, 3, 4, 5};
    // int target = 9;
    // vector<vector<int>> triplets = findTriplet(nums1, target);
    // cout << "Triplets that sum to target: ";
    // for (const vector<int>& triplet : triplets) {
    //     cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ") ";
    // }
    // cout << endl;



    vector<int> nums1 = {0,1,0,0,1,1,0};
    vector<int> zeroOnes = zeroAndOnes(nums1);
    cout << "0 and 1s : ";
    for (int num : zeroOnes) {
        cout << num << " ";
    }
    cout << endl;



    return 0;
}