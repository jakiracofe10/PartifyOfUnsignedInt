#include <iostream>

using namespace std;


//check if even number of 1 bits in unsigned int n
bool isEvenParity(uint64_t n) {
    uint64_t oneCount = 0;
    //get lsb, push out lsb, check if bit is one, continue until no more bits
    while (n!=0) {
        uint64_t nextBit = n & 1;
        n = n >> 1;
       if (nextBit == 1) {
           oneCount++;
       }
    }
    //if ones%2 == 0 then return true (ie negate mod)
    return !(oneCount%2);
}

int main() {
    uint64_t n = 80;
    bool result = isEvenParity(n);
    cout << result << endl;
    return 0;
}