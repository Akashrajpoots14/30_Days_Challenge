#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(vector<int> arr, int sum)
{

    //initilze
    int n = arr.size();
    vector<vector<int>> result;

    // sort the Array/vector
    sort(arr.begin(), arr.end());
    //Pick the current element as 1st element and find other two using pair sum(two pointer)
    for (int i = 0; i < n - 3; i++)
    {
        // setting up the pointer for pair sum
        int low = arr[i + 1];
        int high = arr[n - 1];
        int current_sum = arr[i];
        current_sum += arr[low];
        current_sum += arr[high];

        if (current_sum == sum)
        {
            result.push_back({arr[i], arr[low], arr[high]});
            low++;
            high--;
        }
        else if (current_sum < sum)
        {
            low++;
        }
        else 
        {
            high++;
        }
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 18;
    auto result = triplet(arr, sum);

    for (auto v : result)
    {
        for (auto no : v)
        {
            cout << no << " ";
        }
    }
}