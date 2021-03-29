

#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> output;
    for (int i = 0; i < n; i++) {
        output.push_back(nums[i]);
        output.push_back(nums[i + n]);

    }
    return output;
}
int main()
{

    vector<int> numbers = { 2,5,1,3,4,7 };
    vector<int> output = shuffle(numbers, 3);
    for (int value : output) {
        cout << value << endl;
    }

} 