#include <iostream>
#include "storage_types.hpp"

void P_test(){
    int siz = 5;
    PackageQueue packageQueue(FIFO);

    for (int i = 0; i < siz; ++i) {
        packageQueue.push(Package());
    }

    Package idk;
    std::cout<<packageQueue.size()<<std::endl;
    for (int j = 0; j < siz; j++){
        std::cout<<'.';
        idk = std::move(packageQueue.pop()); //FIXME nie działa i nie wiem czy ma działać
        std::cout<<',';
        std::cout<<idk.get_ID();
        std::cout<<';'<<std::endl;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    P_test();
    std::cout << "Goodbye, World!" << std::endl;
    return 0;
}
