#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int n : nums)
            if (i < 2 || n > nums[i-2])
                nums[i++] = n;
        return i;
    }
};

int main() {
    int a[] = {1,2,2,2,3,3,3,3,3,4,5,5,6,7,8,8,9,10};
    vector<int> v(a,a + sizeof(a)/sizeof(a[0]));
    for(auto& x:v)
        cout<<' '<<x;
    cout<<endl;
    Solution solution;
    cout<<solution.removeDuplicates(v)<<endl;
    for(auto& x:v)
        cout<<' '<<x;

    return 0;
}
