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
    std::cout << paczka1.get_id() << '\t';
    std::cout << paczka2.get_id() << '\t';
    std::cout << paczka3.get_id() << '\t';
    std::cout << paczka4.get_id() << '\t';
    std::cout << paczka5.get_id() << '\t';


    // 2. testowanie kolejki
    // tworzenie kolejki (Fifooo) działa
    PackageQueue nigg(FIFO);
    std::cout << "Initialized Queue" << std::endl;
    // dodawanie elementów również działa
    nigg.push(std::move(paczka1));
    nigg.push(std::move(paczka2));
    nigg.push(std::move(paczka3));
    nigg.push(std::move(paczka4));
    nigg.push(std::move(paczka5));

    std::cout << "Filled Queue" << std::endl;
//    std::cout << nigg.pop().get_id()<< '\t';
//    std::cout << nigg.pop().get_id()<< '\t';
//    std::cout << nigg.pop().get_id()<< '\t';
//    std::cout << nigg.pop().get_id()<< '\t';
//    std::cout << nigg.pop().get_id()<< '\t';
//    std::cout << "Poped Queue" << std::endl;

    std::cout << nigg.pop().get_id()<< '\t';
    std::cout << nigg.pop().get_id()<< '\t';
    std::cout << nigg.pop().get_id()<< '\t';
    std::cout << "Some deleted" << std::endl;

    Package paczka6;
    Package paczka7;
    Package paczka8;
    Package paczka9;
    Package paczka10;
    std::cout << paczka6.get_id() << '\t';
    std::cout << paczka7.get_id() << '\t';
    std::cout << paczka8.get_id() << '\t';
    std::cout << paczka9.get_id() << '\t';
    std::cout << paczka10.get_id() << '\t';
    std::cout << "Default created" << std::endl;


    Package paczka11(6);
    Package paczka12(305);
    Package paczka13(305);
    std::cout << paczka11.get_id() << '\t';
    std::cout << paczka12.get_id() << '\t';
    std::cout << paczka13.get_id() << '\t';
    std::cout << "Specific created" << std::endl;

    std::cout <<'\n'<< "Goodbye, World!" << std::endl;
    return 0;
}
