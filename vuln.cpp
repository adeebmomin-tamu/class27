#include <cstdlib>

int main(int argc, char* argv[]) {
    system(argv[1]); // 🚨 Very obvious command injection
    return 0;
}
