#include <iostream>
#include "storage_types.hpp"

void P_test(){
    int siz = 5;
    PackageQueue packageQueue(FIFO);

    for (int i = 0; i < siz; ++i) {
        packageQueue.push(Package());
    }

    Package psize;
    std::cout<<std::endl;
    for (int i = 0; i < siz; ++i){
        std::cout<<'.';
        Package p;
        p = Package(packageQueue.pop()); //FIXME nie działa i nie wiem czy ma działać
        std::cout<<',';
        std::cout<<p.get_ID();
        std::cout<<';';
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    P_test();
    std::cout << "Goodbye, World!" << std::endl;
    return 0;
}
