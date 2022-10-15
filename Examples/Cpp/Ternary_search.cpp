// Your First C++ Program

#include <iostream>
#include <vector>

using namespace std;
int TernarySearch(std::vector<int> vec, int element, int start, int end)
{
    //cout << end << endl;
    while(start <= end)
    {
        int mid1 = start + (end-start)/3;
        int mid2 = end - (end-start)/3;
        if( vec[mid1] == element)
           return mid1;
        else if( vec[mid2] == element)
           return mid2;
        else if(vec[mid1] > element)
           return TernarySearch(vec, element, start, mid1-1);
        else if(vec[mid2] < element)
           return TernarySearch(vec, element, mid2+1, end);
        else
           return TernarySearch(vec, element, mid1+1, mid2-1);
        
        
    }
return -1;
}
int main() {
    std::vector<int> vec = {1,2,3,4,56,78,90,123,456,789,1234};
    int element = 1234;
    cout << TernarySearch(vec, element, 0, vec.size()-1) << endl;;
    return 0;
}
