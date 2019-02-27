#include <iostream>

using namespace std;

// this program will calculate the area of a room in square feet.

int main(){
    
    // always initialize your variable, otherwise it will give
    // a random number from memory if you 
    // do not read from input.
    int room_width {0};
    int room_length {0};
    
    cout<<"Enter the width of the room: ";
    cin>>room_width;
    
    cout<<"Enter the length of the room: ";
    cin>>room_length;
    
    // display output
    cout<<"The area of the room is " << room_width * room_length << " square feet.\n\n";
    
    return 0;
}