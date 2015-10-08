#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        const size_t n = nums.size();
        int next_slot = n ? 1:0;
        for ( int i =1; i < n; ++i)
        {
            if ( nums[i] != nums[i-1])
                nums[next_slot++] = nums[i];
        }
        return next_slot;
    }
};
int main() {
    int a[] = {1,2,2,2,3};
    vector<int> v(a,a + sizeof(a)/sizeof(a[0]));
    for(auto& x:v)
        cout<<' '<<x;
    cout<<endl;
    Solution solution;
    cout<<solution.removeDuplicates(v);

    return 0;
}