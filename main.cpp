#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (i == 0 || nums[i] != nums[pos - 1])
                nums[pos++] = nums[i];
        }

        return pos;
    }
};

int main() {
    int a[] = {1,2,2,3};
    vector<int> v(a,a + sizeof(a)/sizeof(a[0]));
    for(auto& x:v)
        cout<<' '<<x;
    cout<<endl;
    Solution solution;
    cout<<solution.removeDuplicates(v);

    return 0;
}