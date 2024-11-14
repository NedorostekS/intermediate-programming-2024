#include <iostream>
#include <vector>

void print(std::vector<int> a) {
    for (std::size_t i = 0; i < a.size();i++) {
        std::cout << a[i] << std::endl;
    }
}

int main () {
    std::vector<int> pole = {1, 2, 3};

    //for (std::size_t i = 0; i < pole.size();i++) {
    //    std::cout << pole[i] << std::endl;
    //}

    //for (int a : pole) 
    //    std::cout << a << std::endl;
    

    print(pole);

}