# include <iostream> // include this library to use input/output features of cmd

int main(){
    int favorite_number;  // this is how you declare a variable. It is integer
    std::cout << "Enter your favorite number between 1 and 100: ";  // this is command out. output to command prompt
    std::cin >> favorite_number; // input to command prompt using cin.
    std::cout << "Amazing!! That's my favorite number too!"<< std::endl;
    return 0;
}