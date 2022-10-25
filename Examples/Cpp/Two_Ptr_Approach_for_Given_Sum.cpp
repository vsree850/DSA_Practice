
//Probelm Statement:

// For the given sorted array find the two numbers which produces 
// the sum same as given value

// 1. Brute force approach
// 2. Fix one element and do binary search
// 3. two pointe approach as per below solution

#include <iostream>
#include <vector>

using namespace std;
//Time complexity: O(n)
// Two pointer approach

void two_sum(vector<int> arr, int target_sum)
{
    int left = 0;
    int right = arr.size() - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] == target_sum)
        {
            cout << left  << "  " << right << endl;;
            left += 1;
        }
        else if (arr[left] + arr[right] < target_sum)
        {
            left += 1;
        }
        else
        {
            right -= 1;
        }
    }
}
    
int main()
{
// Driver code
std::vector<int> arr = {20, 25, 30, 40, 60, 80, 90, 120, 180, 185, 190, 240};
int target_sum = 210;
two_sum(arr, target_sum);
return 0;
}
