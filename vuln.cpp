#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Running: " << argv[1] << std::endl;
    system(argv[1]); // 🚨 Command injection
    return 0;
}
