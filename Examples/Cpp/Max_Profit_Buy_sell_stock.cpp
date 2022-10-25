
//Probelm Statement:

// For the given array Find the max profit earning by selling the stock.

#include <iostream>
#include <vector>
#include <climits>

using namespace std;
//Time complexity: O(n)

int maxProfit(vector<int> arr)
{
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for(auto it : arr)
    {
        if(it < minPrice)
        {
            minPrice = it;
        }
        else if((it - minPrice) > maxProfit)
        {
            maxProfit = it - minPrice;
        }    
    }
    
    return maxProfit;
}
    
int main()
{
// Driver code
std::vector<int> arr = {20, 25, 30, 40, 60, 80, 90, 120, 180, 185, 390, 240};
cout << maxProfit(arr) << endl;
return 0;
}
