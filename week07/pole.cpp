#include <iostream>
#include <vector>

void print(std::vector<int> a) {
    std::cout << "[";
    for (std::size_t i = 0; i < a.size();i++) {
        if (i != 0) { 
            std::cout << ", ";
        }
        std::cout << a[i];
    }
    std::cout << "]" << std::endl;
}

int main () {
    std::vector<int> pole = {4, 8, 15, 16, 23, 42};

    //for (std::size_t i = 0; i < pole.size();i++) {
    //    std::cout << pole[i] << std::endl;
    //}

    //for (int a : pole) 
    //    std::cout << a << std::endl;
    

    print(pole);

}