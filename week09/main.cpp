#include <iostream>
#include <vector>

    void print(std::vector<int> data) {
        if (data.size() == 0) {
            std::cout << "[]";
            return;
        }

        std::cout << "[ ";
        for (std::size_t i = 0; i < data.size() - 1; i++) {
        std::cout << data[i] << ", ";
        }

        std::cout << data.back() << " ]";
    }

    bool palindrom(std::vector<int> data) {
        std::size_t n = data.size();
        for (std::size_t i = 0; i < n / 2; ++i) {
            if (data[i] != data[n - i - 1]) {
                return false;
            }
        }
        return true;
    } 

int main() {
    std::vector<int> vec1 = { 1, 9, 15, 21, 6, 15, 8, 1};
    std::vector<int> vec2 = { 1, 9, 15, 21, 21, 15, 9, 1};
    std::vector<int> vec3 = { 1, 9, 15, 21, 15, 9, 1};
    std::vector<int> vec4 = {1};
    std::vector<int> vec5 = {};
    
    std::cout << "vec1";
    if (palindrom(vec1) == 1) {
        std::cout << " je ";
    } else {
        std::cout << " není ";
    }
    std::cout << "palindrom" << std::endl;

    std::cout << "vec2";
    if (palindrom(vec2) == 1) {
        std::cout << " je ";
    } else {
        std::cout << " není ";
    }
    std::cout << "palindrom" << std::endl;

    std::cout << "vec3";
    if (palindrom(vec3) == 1) {
        std::cout << " je ";
    } else {
        std::cout << " není ";
    }
    std::cout << "palindrom" << std::endl;

    std::cout << "vec4";
    if (palindrom(vec4) == 1) {
        std::cout << " je ";
    } else {
        std::cout << " není ";
    }
    std::cout << "palindrom" << std::endl;

    std::cout << "vec5";
    if (palindrom(vec5) == 1) {
        std::cout << " je ";
    } else {
        std::cout << " není ";
    }
    std::cout << "palindrom" << std::endl;

    //std::cout << palindrom(vec1) << std::endl;
    //std::cout << palindrom(vec2) << std::endl;
    //std::cout << palindrom(vec3) << std::endl;
    //std::cout << palindrom(vec4) << std::endl;
    //std::cout << palindrom(vec5) << std::endl;
    
}