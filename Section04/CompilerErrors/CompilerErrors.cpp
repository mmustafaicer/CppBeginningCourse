#include <iostream>
// There are Syntax errors and Semantic errors.
// For example, if you miss a curly bracket that is
// syntax error. If you are syntax wise correct, but logicwise
// wrong it is semantic error. Below is an example of semantic error.
// A string can't be divided by integer.

int main(){
    std::cout << ("Hello World"h/125)<<std::endl;
    return 0;
}