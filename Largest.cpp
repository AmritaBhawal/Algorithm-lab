#include <iostream>

int main() {
    int numbers[] = {10, 24, 5, 78, 45, 90, 12, 65};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    if (size == 0) {
        std::cout << "The list is empty." << std::endl;
        return 1;
    }

    int largest = numbers[0];

    for (int i = 1; i < size; ++i) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    std::cout << "The largest number in the list is: " << largest << std::endl;

    return 0;
}

