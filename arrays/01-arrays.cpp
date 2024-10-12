#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[], int length)
{
    int max = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            {
                max = arr[i];
            }
        }
    }
    return max;
}

int findMin(int arr[], int length)
{
        int min = INT_MAX;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < min)
        {
            {
                min = arr[i];
            }
        }
    }
    return min;
}

void linearSearch(int arr[], int length, int target)
{
    for (int i = 0; i < length; i++)
    {
        if(target == arr[i]){
            cout << " Your Target is at index of " << i << "th" << endl;
        }
    }
}

void reverseArray(int arr[], int length)
{
    for (int i = length-1; i>=0; i--)
    {
        cout<< arr[i]<<" ";
    }
    cout << endl;
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[15] = {7, 232, 32, 12, 9, 2, 12, 49, 98, 2, 67, 83, 91, 3, 8};
    printArray(arr,15);
    linearSearch(arr,15,232);
    reverseArray(arr,15);
    int max = findMax(arr, 15);
    int min = findMin(arr, 15);
    cout << max << endl;
    cout << min << endl;

    return 0;
}