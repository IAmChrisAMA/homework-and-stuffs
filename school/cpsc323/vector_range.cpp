#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <ctype.h>
#include <regex>
#include <vector>
#include <tuple>

void processLine();

int main(int argc, char* argv[]) {
    processLine();
}

void processLine() {
    const std::regex r("(!([^!]|!!)*!)");  
    std::smatch sm;
    std::string id = "! Hello ! int value = 0;";
    
    std::vector<std::tuple<int, int>> collection;
    
    if (std::regex_search(id, sm, r)) {
        for (unsigned long int i=1; i<sm.size()-1; i++) {
            std::cout << id << std::endl;
            unsigned long int start = sm.position(i);
            unsigned long int end = start + sm.length(i);
            
            //std::cout << "start: " << start << " end: " << end << std::endl << std::endl;
            collection.push_back(std::make_tuple(start, end));
            
            for (auto element : collection) { 
                auto [x, y] = element;
                if (x < end || y < start) { std::cout << "nice" << std::endl; } 
                else { std::cout << "BAD" << std::endl; }
                std::cout << x << " " << y << std::endl;
            }

         }
    }
} 
