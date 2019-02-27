/*  Section 7
    Challenge
    
    Write a C++ program as follows:
    
    Declare 2 empty vectors of integers named
    vector1 and vector 2, respectively.
    
    Add 10 and 20 to vector1 dynamically using push_back
    Display the elements in vector1 using the at() method as well as its size using the size() method
    
    Add 100 and 200 to vector2 dynamically using push_back
    Display the elements in vector2 using the at() method as well as its size using the size() method

    Declare an empty 2D vector called vector_2d
    Remember, that a 2D vector is a vector of vector<int>
    
    Add vector1 to vector_2d dynamically using push_back
    Add vector2 to vector_2d dynamically using push_back
    
    Display the elements in vector_2d using the at() method
    
    Change vector1.at(0) to 1000
    
    Display the elements in vector_2d again using the at() method
    
    Display the elements in vector1 
    
    What did you expect? Did you get what you expected? What do you think happended?
*/
    
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    // display
    cout<<"vector 1 below"<<endl;
    cout<<"The first element at index 0: "<<vector1.at(0)<<endl;
    cout<<"The second element at index 1: "<<vector1.at(1)<<endl;
    cout<<"There are "<<vector1.size()<<" elements in the vector1.\n"<<endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    // display
    cout<<"vector 2 below"<<endl;
    cout<<"The first element at index 0: "<<vector2.at(0)<<endl;
    cout<<"The second element at index 1: "<<vector2.at(1)<<endl;
    cout<<"There are "<<vector2.size()<<" elements in the vector2.\n"<<endl;
    
    // 2D vector
    vector <vector <int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    // display elements of 2D vector
    cout<<"Displaying 2D vector below\n"<<endl;
    cout<<"The element at index [0][0]: " <<vector_2d.at(0).at(0)<<endl;
    cout<<"The element at index [0][1]: " <<vector_2d.at(0).at(1)<<endl;
    cout<<"The element at index [1][0]: " <<vector_2d.at(1).at(0)<<endl;
    cout<<"The element at index [1][1]: " <<vector_2d.at(1).at(1)<<endl;
    
    // change vector1.at(0) to 1000
    vector1.at(0) = 1000;
    
    // display display elements of 2D vector again
    cout<<"\nHere 2D vector again, after we change vector1\n"<<endl;
    cout<<"The element at index [0][0]: " <<vector_2d.at(0).at(0)<<endl;
    cout<<"The element at index [0][1]: " <<vector_2d.at(0).at(1)<<endl;
    cout<<"The element at index [1][0]: " <<vector_2d.at(1).at(0)<<endl;
    cout<<"The element at index [1][1]: " <<vector_2d.at(1).at(1)<<endl;
    
    // display vector1
    cout<<"\nvector1 after we changed it";
    cout<<"\nThe first element at index 0: "<<vector1.at(0)<<endl;
    cout<<"The second element at index 1: "<<vector1.at(1)<<endl;
    cout<<"\nApparently, the 2D vector is not changed after we changed vector1"<<endl;
    cout<<"Although we change vector 1, it does not affect the already created 2D vector."<<endl;
    cout<<"When we create vector of vectors, basically it uses copies of it. Even if you make changes"<<endl;
    cout<<"to original vectors, our 2D vector will not change."<<endl;
    cout << endl;
    return 0;
}