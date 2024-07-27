#include <iostream>
#include <vector>

std::vector<int> nums_1 = {2, 7, 11, 15};
int target_1 = 9;

std::vector<int> nums_3 = {3, 3};
int target_3 = 6;

std::vector<int> twoSum(std::vector<int> &nums, int target) {
  std::vector<int> result = {0, 0};

  for (int i = 0; i < nums.size(); i++) {
    int difference = target - nums[i];
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[j] == difference) {
        result[0] = i;
        result[1] = j;
        return result;
      }
    }
  }

  return result;
}

int main() {
  std::vector<int> result_1 = twoSum(nums_1, target_1);
  for (int x : result_1)
    std::cout << x << " ";

  std::vector<int> result_3 = twoSum(nums_3, target_3);
  for (int x : result_3)
    std::cout << x << " ";
  return 0;
}
