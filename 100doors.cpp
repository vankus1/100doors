#include <bitset>
#include <iostream>
#include <algorithm>
#include <print>
#include <vector>

int main() {

    std::bitset<100> doors;

    for (int passes{1}; passes <= 100; passes++) {
        if (passes == 1) {
            doors.set();
            continue;
        }
        for (int i{ passes }; i <= 100; i += passes) {
            doors.flip(i - 1);
        }
    }

    std::string str_doors = doors.to_string();
    std::reverse(str_doors.begin(), str_doors.end());

    size_t n = str_doors.length();
    std::vector<int> results;

    for (size_t i{}; i < n; i++) {
        if (str_doors[i] == '1') {
            results.push_back(i + 1);
        }
    
    }
    for (int result : results) {
        std::print("{} ", result);

    }

}