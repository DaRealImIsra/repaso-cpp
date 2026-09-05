#include <iostream>

int suma(const int v[], int n) { // A
    int s = 0;
    for (int i = 0; i < n; i++) //<= estaba mal
        s += v[i];
    return s;
}

int main() {
    int nums[5] = {20, 40, 80, 60, 50};
    int sum = suma(nums, 5);
    std::cout << sum << '\n';
}