#include <iostream>

using namespace std;

int main(){
    // constants
    const double tax_rate {0.06};
    const double small_room_fee {25};
    const double large_room_fee {35};
    const int date_expiry {30};
    
    int n_small {0};
    int n_large {0};
    cout<<"Welcome to Mehmet's Carpet Cleaning Service"<<endl;
    cout<<"\nHow many small room to be cleaned: ";
    cin>>n_small;
    cout<<"How many large room to be cleaned: ";
    cin>>n_large;
    cout<<endl;
    
    // output
    cout<<"Estimate for carpet cleaning service"<<endl;
    cout<<"==============================="<<endl;
    cout<<"Number of small rooms: "<<n_small<<endl;
    cout<<"Number of large rooms: "<<n_large<<endl;
    cout<<"Price per small room: $"<<small_room_fee<<endl;
    cout<<"Price per large room: $"<<large_room_fee<<endl;
    cout<<"Cost: $"<<(n_small*small_room_fee) + (n_large*large_room_fee)<<endl;
    cout<<"Tax: $"<<((n_small*small_room_fee) + (n_large*large_room_fee))*tax_rate<<endl;
    
    cout<<"==============================="<<endl;
    cout<<"Total estimate: $"<<((n_small*small_room_fee) + (n_large*large_room_fee)) +
            ((n_small*small_room_fee) + (n_large*large_room_fee)) *tax_rate<<endl;
    
    cout<<"This estimate is valid for "<<date_expiry<<" days."<<endl;
    return 0;
}