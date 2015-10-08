#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return distance(nums.begin(),unique(nums.begin(),nums.end()));
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
