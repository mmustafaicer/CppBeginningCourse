#include <iostream>

// If you compile, there will be no error or warnings.
// But it will give a LinkerError (can't find where x comes from)

extern int x;
int main(){
    std::cout << "Hello World"<<std::endl;
    std::cout<<x;
    return 0;
}