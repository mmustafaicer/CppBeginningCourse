#include <iostream>

int main(){
    // declare a int variable
    int favorite_number; 
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin>> favorite_number;         // get the input and assign it to favorite_number variable
    
    // print and escape character (\n) for new line
    std::cout<< "Amazing!! That's my favorite number too!\n"; 
    std::cout<< "No really!! " <<favorite_number << " is my favorite number!"<< std::endl;      // insert variable

    return 0;
}