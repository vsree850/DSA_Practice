// Your First C++ Program

#include <iostream>
#include <vector>

using namespace std;
// function: binarySearch
// in[] : vec for search, element to find, start and end index to search.
// return : index of the element on success and -1 on failure

int binarySearch(std::vector<int> vec, int element, int start, int end)
{
    while(start <= end)
    {
        // Another approach is to use (start + end)/2, this may lead to integer overflow
        // So below approach is preferable.
        int mid = start + (end-start)/2;
        if( element == vec[mid] )
        {
           return mid;
        }
        else if(element > vec[mid])
        {
           return binarySearch(vec, element, mid+1, end);
        }
        else
        {
            return binarySearch(vec, element, start, mid-1);
        }   
    }
    return -1;
}

int main() {
    std::vector<int> vec = {1,2,3,4,56,78,90,123,456,789};
    int element = 90;
    cout << binarySearch(vec, element, 0, vec.size()) << endl;;
    return 0;
}
