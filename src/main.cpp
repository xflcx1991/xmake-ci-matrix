#include <iostream>

int main() {
    std::cout << "hello from xmake ci\n";
#if defined(_WIN32)
    std::cout << "os=windows\n";
#elif defined(__APPLE__)
    std::cout << "os=macos\n";
#elif defined(__linux__)
    std::cout << "os=linux\n";
#else
    std::cout << "os=unknown\n";
#endif

#if defined(__aarch64__) || defined(_M_ARM64)
    std::cout << "arch=arm64\n";
#elif defined(__x86_64__) || defined(_M_X64)
    std::cout << "arch=x64\n";
#elif defined(__i386__) || defined(_M_IX86)
    std::cout << "arch=x86\n";
#else
    std::cout << "arch=other\n";
#endif
    return 0;
}
