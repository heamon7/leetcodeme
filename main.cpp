#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag = 0;
        int pos = nums.size()?1:0;
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == nums[i-1]){
                if(flag == 0){
                    flag++;
                    nums[pos++] = nums[i];
                }
            }
            else{
                nums[pos++] = nums[i];
                flag = 0;
            }
        }
        nums.resize(pos);
        return pos;
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
