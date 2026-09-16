#include <iostream>
template <typename T>
T Add(T a, T b) {
    return a + b;
}

int main() {
    Add(10, 15);
    return 0;
}