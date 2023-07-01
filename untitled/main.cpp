#include <iostream>

int jump(int n, int k = 3) {
    if (n <= 1) {
        return 1;
    }
    int count = 0;
    for (int i = 1; i <= k && i <= n; i++) {
        count += jump(n - i, k);
    }
    return count;
}

int main() {
    int n, k;
    std::cout << "Enter the number of steps: ";
    std::cin >> n;
    std::cout << "Enter the maximum jump length: ";
    std::cin >> k;

    int ways = jump(n, k);
    std::cout << "Number of ways: " << ways << std::endl;

    return 0;
}
