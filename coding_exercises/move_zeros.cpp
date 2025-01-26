#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
        void moveZeros(vector<int>& nums)
        {
            cout << "inside the computation function" << endl;
            int start = 0;
            auto startPtr = nums.begin();
            for(int i=1; i<nums.size(); i++)
            {
                if(*startPtr == 0)
                {
                    int temp = *startPtr;
                    *startPtr = nums[i];
                    nums[i] = temp;
                }
                ++startPtr;
            }

            cout << "Rearranged array: " << endl;
            for(auto it=nums.begin(); it!=nums.end(); ++it)
            {
                cout << *it << "  ";
            }
            cout << endl;
        }
};

int main()
{
    Solution solution;

    vector<int> numbers = {8, 10, 0, 2, 0, 50, 22, 0, 5, 53, 11, 0};
    solution.moveZeros(numbers);

    return 0;
}