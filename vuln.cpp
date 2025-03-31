#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
    char buffer[10];
    strcpy(buffer, argv[1]); // 🚨 Classic buffer overflow
    std::cout << "You entered: " << buffer << std::endl;
    return 0;
}
