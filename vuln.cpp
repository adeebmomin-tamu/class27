#include <cstdlib>

int main(int argc, char* argv[]) {
    system(argv[1]); // 🚨 Obvious command injection
    return 0;
}
