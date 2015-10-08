#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1){
            return nums.size();
        }
        else{
            int index = 0;
            for(vector<int> ::iterator it=nums.begin()+1;it!=nums.end();++it){
                if(nums.at(index)!=*it){
                    nums.at(++index) = *it;
                }
                else{
                    nums.erase(it);
                }
            }
            return index + 1;
        }
    }
};

int main() {
    int a[] = {1,2};
    vector<int> v(2,1);


    cout<<v.size()<<endl;
    Solution solution;
    cout<<solution.removeDuplicates(v);

    return 0;
}