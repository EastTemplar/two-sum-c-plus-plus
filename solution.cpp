#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int> &nums, int target) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        return std::vector<int>{i, j};
      }
    }
  }

  return std::vector<int>();
}

void printResult(std::vector<int> &input, int target) {
  std::vector<int> result = twoSum(input, target);

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << "\n";
  }

  std::cout << "------------\n";
}

int main() {
  std::vector<int> first_input{2, 7, 11, 15};
  std::vector<int> second_input{3, 2, 4};
  std::vector<int> third_input{3, 3};

  int target_first = 9;
  int target_second = 6;
  int target_third = 6;

  printResult(first_input, target_first);
  printResult(second_input, target_second);
  printResult(third_input, target_third);

  return 0;
}
