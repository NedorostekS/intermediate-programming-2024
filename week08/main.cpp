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

int sum(std::vector<int> data) {
    int a = 0;
    for (std::size_t i = 0; i < data.size(); i++) {
        int now = data[i];
        a = a + now;
    }

    return a;
}

float average(std::vector<int> data) {
    float a = 0;
    for (std::size_t i = 0; i < data.size(); i++) {
        float now = data[i];
        a = a + now;
    }
    
    float res = a / data.size();
    
    return res;
}


float median(std::vector<int> data) {
    float i = 0;

    if (((data.size() + 1) % 2) ==  1) {
        // even
        i = data.size() / 2;
        i = data[i] + data[i + 1];
        i = i / 2;
    } else {
        // not even
        i = data.size() / 2;
        i = data[i];
    }

    return i;
}

std::vector<int> range(int start, int end) { 
    std::vector<int> range_pole = {};
    if (start < end) {
        for (int i = start; i < end; i++ ) {
        range_pole.push_back(i);
        }
    } else if (start > end) {
        for (int i = start; i > end; i-- ) { 
        range_pole.push_back(i);
        }
    } else {
    }

    return range_pole;
}

std::vector<int> runningSum(std::vector<int> data) {
    std::vector<int> runningSum_array = {};
    int a = 0;
    for (std::size_t i = 0; i < data.size(); i++) {
        int now = data[i];
        a = a + now;
        runningSum_array.push_back(a);
    }

    return runningSum_array;
}

std::vector<int> rotateRight(std::vector<int> data, int count) {
    std::vector<int> rotate_array = {};

    count = count % data.size();

    for (std::size_t i = count; i < data.size(); i++) {
        rotate_array.push_back(data[i]);
    }
    for (int i = 0; i < count; i++) {
        rotate_array.push_back(data[i]);
    }

    return rotate_array;
}


int main() {
    std::vector<int> vec1 = { 1, 9, 4, 8, 4, 0, 9, 2, 3, 5, 6 };
    std::vector<int> asc1 = { 0, 2, 4, 7, 8};
    std::vector<int> asc2 = { 1, 3, 5, 6, 7, 9 };

    std::cout << "sum(vec1): " << sum(vec1) << std::endl;
    std::cout << "average(vec1): " << average(vec1) << std::endl;
    std::cout << "median(asc1): " << median(asc1) << std::endl;

    std::cout << "range(5, 10): ";
    print(range(5, 10));
    std::cout << std::endl;

    std::cout << "range(11, 4): ";
    print(range(11, 4));
    std::cout << std::endl;

    std::cout << "runningSum(vec1): ";
    print(runningSum(vec1));
    std::cout << std::endl;

    std::cout << "rotateRight: ";
    print(rotateRight(vec1, 3));
    std::cout << std::endl;

}
