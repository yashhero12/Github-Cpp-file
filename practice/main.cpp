#include <iostream>
#include <string>

int stringmodulesuseing(){
    std::string variable;
    // to store a string we use string module
    std::cout<<"enter your variable or string you wana to store : ";
    std::getline(std::cin,variable);
    std::cout<<"here is your variable : "<<variable<<std::endl;
    return 0;
}


int main(){

    stringmodulesuseing();


    // int age;
    // std::string name;
    // std::cout << "please enter your name and age : " << std::endl;
    
    // // std::cin >> name;
    // // std::cin >> age;
    
    // std::cin >> name >> age;

    // std::cout << "Hello " << name << " You are " << age << "year old " << std::endl;

    // data with spaces
    // std::string fullname;
    // int age2;
    // std::cout << "Sir enter your Full name : ";
    // std::getline(std::cin,fullname);
    // std::cout << "Sir enter your age : ";
    // std::cin>>age2;
    // std::cout << "Hello " << fullname << " You are " << age2 << "year old " << std::endl;

    // int random ; 
    // std::cout<<"random value : "<<random<<std::endl;



    return 0;
}