// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int x);
int closestPrime(int x);
/** You should put in a main for testing, but then comment it out for submission.
 * The test.cpp file will include the main in your submission. You do not edit the test.cpp 
 * file. The only file to edit is app.cpp**/
/**** 
int main()
{
    
    return 0;          
}
****/
/*int main()
{
    cout << closestPrime(8) << "\n";
    cout << closestPrime(27) << "\n";
    cout << closestPrime(90) << "\n";
    cout << closestPrime(2) << "\n";
    cout << closestPrime(1) << "\n";
    cout << closestPrime(3) << "\n";
    cout << closestPrime(7) << "\n";
    cout << closestPrime(79) << "\n";
    cout << closestPrime(67) << "\n";
    cout << closestPrime(5) << "\n";
    return 0;          
}
*/


//Checks whether an int is prime. 
//Currently runs in O(x) time. 
//
//Note that by saving past values, time complexity for repeated calls could be reduced. 
//Note also that 1, 0, and negative numbers are not considered prime nor composite. If any of these are entered as a parameter, the function will return false. 
bool isPrime(int x){
    if(x <= 1) return false;
    for(int i = 2; i <= (x / 2); i++){
        if((x % i) == 0) return false;
        if((x) == 0) return false;
    }
    return true;
}

//Returns the closest prime to x that is larger than x.

int closestPrime(int x){
    int counter = 0;
    
    while(true){
        //cout << x + counter; //For Debugging Purposes. 
        if(isPrime((x + counter))) return (x + counter);
        counter++;
    }
    return -1;
}
