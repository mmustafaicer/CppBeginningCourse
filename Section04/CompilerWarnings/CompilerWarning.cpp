#include <iostream>

// in this case, compiler will raise a warning
// because we set a variable but did not use it
// If you do not use it why created it?

int main(){
    int favorite_number;
    favorite_number=100;
    std::cout <<"Hello World"<<std::endl;
    return 0;
}