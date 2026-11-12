
#include <iostream>
using namespace std;

// Linear Search
int linearsearch(int arr[], int n, int id)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == id)
            return i;
    }

    return -1;
}

// Binary Search
int binarysearch(int arr[], int n, int id)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == id)
        {
            return mid;
        }
        else if(arr[mid] < id)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[100], n, id;

    cout << "Enter the number of customer accounts:";
    cin >> n;

    cout << "Enter customer account IDs in sorted order:\n";

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter customer ID to search:";
    cin >> id;

    int l = linearsearch(arr, n, id);
    int b = binarysearch(arr, n, id);

    if(l != -1)
        cout << "Customer account found using linear search:\n";
    else
        cout << "Customer account not found using linear search:\n";

    if(b != -1)
        cout << "Customer account found using binary search:\n";
    else
        cout << "Customer account not found using binary search:\n";

    return 0;
}
