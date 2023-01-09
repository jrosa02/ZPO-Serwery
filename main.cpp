#include <iostream>
#include "storage_types.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Package paczka1;
    Package paczka2;
    Package paczka3;
    Package paczka4;
    Package paczka5;
    std::cout << "Paczki maja rozne id" << std::endl;
    std::cout << paczka1.get_id() << std::endl;
    std::cout << paczka2.get_id() << std::endl;
    std::cout << paczka3.get_id() << std::endl;
    std::cout << paczka4.get_id() << std::endl;
    std::cout << paczka5.get_id() << std::endl;


    // 2. testowanie kolejki
    // tworzenie kolejki (Fifooo) działa
    PackageQueue nigg(PackageQueueType::FIFO);
    // dodawanie elementów również działa
    nigg.push(Package());
    nigg.push(Package());
    nigg.push(Package());
    nigg.push(Package());
    std::cout << "Goodbye, World!" << std::endl;


    return 0;
}
