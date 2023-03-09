#include<iostream>
using namespace std;
int main() {
    int mar1[4];
    int mar2[5] = {1,2,3,4};
    cout << sizeof(mar1)/sizeof(mar2[2]) << endl;
    return 0;
}    