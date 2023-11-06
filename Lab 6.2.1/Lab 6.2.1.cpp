#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

void generateArray(int a[], int size, int index = 0) {
    if (index < size) {
        a[index] = rand() % 101;
        generateArray(a, size, index + 1);
    }
}

int findMax(const std::vector<int>& a) {
    int max = a[0];
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int findMin(const std::vector<int>& a) {
    int min = a[0];
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int main() {
    std::srand(std::time(0));

    const int size = 15;
    int a[size];
    generateArray(a, size);

    std::cout << "Generated array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    if (a[0] == -1) {
        std::cerr << "The array is empty." << std::endl;
    }
    else {
        std::vector<int> aVector(a, a + size);
        int max = findMax(aVector);
        int min = findMin(aVector);

        std::cout << "Maximum element: " << max << std::endl;
        std::cout << "Minimum element: " << min << std::endl;
    }
    return 0;
}
