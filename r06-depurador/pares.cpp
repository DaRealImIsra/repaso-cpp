#include <iostream>

int pares(const int v[], int n) { // B
    int c = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0) c++; // != estaba mal
    return c;
}

int main() {
    int nums[5] = {20, 40, 80, 60, 50};
    int sum = pares(nums,5);
    std::cout << sum << '\n';
}