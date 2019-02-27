/*   
 *  Namespaces are there to avoid a matching name confusion. Assume that we have two output()
 *  function of two different libraries. How will compiler understand which output() belongs to
 * which library. That is where namespaces come into play.
  */

#include <iostream>

using namespace std;        // instead of writing std for all lines use this 

int main() {
    int favorite_number;
    cout<<"Enter your favorite number between 1 and 100: ";
    cin>> favorite_number;
    cout<<"Amazing! That's my favorite number too!" <<endl;
    cout <<"No really!!, " <<favorite_number
    << " is my favorite number too!"<< endl;
    return 0;
}