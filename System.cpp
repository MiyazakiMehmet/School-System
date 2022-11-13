#include "System.h"

System::System(){}

void System::entry(){

    std::cout <<"\nDate: 11/13/2022";
    std::cout <<"\nName: Mehmet Koray Ergut";
    std::cout <<"\nLocation: Istanbul";
    std::cout <<"\nDepartment: Computer Science\n";
}
void System::grades(){
    std::cout << "\nLessons: \n\n1-)Computitonal Thinking: 98.18(AA)\n2-)History of Humanking: 80.00(BA)\n3-)Design: 85.83(BA)\n4-)Origins and Consequences: 85.00(BA)\n5-)Turkish: 98.00(AA)\n";
}

System::~System(){}


