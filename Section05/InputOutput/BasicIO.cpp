#include <iostream>

using namespace std;

int main(){
 //   cout << "Hello World!"<<endl;       // endl stands for "go to new line"
    
//    cout <<"Hello";         // since it does not go new line it will be HelloWorld with no spaces b/w
//    cout<<"World"<<endl; 

//    cout<<"Hello world!"<<endl;
//    cout<<"Hello"<<" World!"<<endl;         // this is chained insertion
//    cout<<"Hello"<<" world!\n";
//    cout<<"Hello\nOut\nThere\n";            // same as escape character in Python \n

    int num1;
    int num2;
    double num3;
    
    // Although there are 2 input prompts below, you can enter two integer values
    // in one single "Enter" key by putting a space between. 100 200 "Enter" means
    // num1=100 and num2=200.
    
//    cout <<"Enter first integer: ";
//    cin >> num1;

//    cout <<"Enter second integer: ";
//    cin >> num2;

//    cout << "You entered: " << num1 << " and " << num2 << endl;

    // Another example where we can get two input with a single prompt. Chained stream
//    cout<<"Enter 2 integers separated with space: ";
//    cin>>num1>>num2;
//    cout<<"You entered " <<num1<<" and "<<num2<<endl;
    
    cout<<"Enter a double: ";
    cin>>num3;
    cout<<"You entered: " << num3 <<endl;

    return 0;
}