#include <iostream>
#include <algorithm>

int main() {
  int i;
  std::cin >> i;
  int priorities[i];
  for (int j = 0; j < i; j++) {
    std::cin >> priorities[j];
  }
  std::sort(priorities, priorities + i);
  for (int j = 0; j < i; j++) {
    std::cout << priorities[j] << std::endl;
  }
}
