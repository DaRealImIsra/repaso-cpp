#include <iostream>

int maximo(const int v[], int n) { // C
    int mejor = v[0]; // mejor no estaba asignado a nada (basura)
    for (int i = 0; i < n; i++)
        if (v[i] > mejor)
            mejor = v[i];
    return mejor;
}

int main() {
    int nums[5] = {20, 40, 80, 60, 50};
    int sum = maximo(nums,5);
    std::cout << sum << '\n';
}