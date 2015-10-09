#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first = 0;
        int last = nums.size()-1;
        while(first<=last){
            int mid = (first+last)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                //目标在mid的左区间的情况：1.全区间肯定roated；2.mid在小区间；3.target大于小区间最大的数
                if(nums[mid] < nums[first] && target > nums[last] &&  nums[first] > nums[last]){
                    last = (mid!=last)?mid:mid-1;
                }
                else{
                    first = (mid!=first)?mid:mid+1;
                }
            }
            else{
                //目标在mid的右区间的情况：1.全区间roated；2.mid在大区间；3.target小于大区间的最小数
                if(nums[mid] > nums[last] && target < nums[first] && nums[first] > nums[last]){
                    first = (mid!=first)?mid:mid+1;
                }
                else{
                    last = (mid!=last)?mid:mid-1;
                }

            }
        }
        return -1;
    }
};

int main() {
    int a[] = {1};
    vector<int> v(a,a + sizeof(a)/sizeof(*a));
    for(auto& x:v)
        cout<<' '<<x;
    cout<<endl;
    Solution solution;
    cout<<solution.search(v,0)<<endl;
    for(auto& x:v)
        cout<<' '<<x;

    return 0;
}
