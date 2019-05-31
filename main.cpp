#include <iostream>
#include "Invoice.h"
#include <vector>
#include <memory>
#include <algorithm>
#include <random>

std::string randomNumber(){
    std::string s;
    std::string alphanum[] ={
            "0123456789",
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
            "abcdefghijklmnopqrstuvwxyz"
    };

    int pom;
    for (int i = 0; i < 10; ++i) {
        pom = i%3;
        s += alphanum[pom][rand() % (alphanum[pom].size())];
    }
    return s;
}
double randomPrice(){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(1500.0, 13000.0);
    return dist(mt);
}
std::string randomTitle(){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0, 4);
    switch ((int)(dist(mt))){
        case 0:
            return "food";
        case 1:
            return "drink";
        case 2:
            return "transport";
        case 3:
            return "work";
    }

}

int main() {
    std::vector<std::shared_ptr<Invoice>> v;
    for(int i = 0; i < 15; ++i){
        v.push_back(std::make_shared<Invoice>(Invoice(randomNumber(), randomPrice(), randomTitle())));
    }

    std::for_each(v.begin(), v.end(), [](const std::shared_ptr<Invoice> &i){
        std::cout << *i << std::endl;
    });
    return 0;
}