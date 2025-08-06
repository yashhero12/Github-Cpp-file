#include <iostream>
#include <string>



int main(){

    int nameofarray[5] {1,2,3,4,5};

    std::cout<<"to print value we use loops"<<std::endl;

    for(int i:nameofarray){
        std::cout<<"value : "<<i<<std::endl;
    }

    return 0;
}