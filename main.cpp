#include <iostream>
#include <string>
#include <system.h>
#include <vector>

void management_system_initial(int &num)
{
    std::cout << "\nKadir Has University Management System\n" << std::endl;
    std::cout << "----------------------------------------------------\n" << std::endl;
    std::cout << "1-) Student Info\n2-) Grades\n3-) Exit" << std::endl;
    std::cout << "----------------------------------------------------\n" << std::endl;
    std::cout << "\nPlease enter your proccess: ";
    std::cin >> num;
    if(num <= 0 || num > 3){
        while(num <= 0 || num > 3){
            std::cout << "Please enter a valid value: ";
            std::cin >> num;
        }
    }
}
void selection(System source, int num,bool &answer) 
{
    char x;
    switch(num)
    {
        case 1:
            source.entry();
            while(true){
                std::cout << "\nDo you wanna continue to proccess? Y/N: ";
                std::cin >> x;
                if(x == 'Y' || x == 'y'){
                    answer = true;
                    break;
                }
                else if(x == 'N' || x == 'n'){
                    answer = false;
                    std::cout << "\nOkay, see you!\n";
                    break;
                }
                else
                    continue;
            }
            break;
        case 2:
            source.grades();
            while(true){
                std::cout << "\nDo you wanna continue to proccess? Y/N: ";
                std::cin >> x;
                if(x == 'Y' || x == 'y'){
                    answer = true;
                    break;
                }
                else if(x == 'N' || x == 'n'){
                    answer = false;
                    std::cout << "\nOkay, see you!\n";
                    break;
                }
                else
                    continue;
            }
        case 3:
            std::cout << "\nOK, see you!" << std::endl;
            answer = false;
            break;
    } 
}

int main(){
    bool answer = true;
    int num = 0;
    System school;
    while(answer){
        management_system_initial(num);
        selection(school, num, answer);
    }
    return 0;
}
