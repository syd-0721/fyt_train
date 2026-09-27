#include <iostream>

int main() {
    int k;
    std::cin >> k;
    double sum = 0.0;
    int n = 0;
    while (sum <= k) {
        n++;
        sum += 1.0 / n;
    }
    std::cout << n << std::endl;
    return 0;
}