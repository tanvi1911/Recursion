// Print Name N times using Recursion

#include <iostream>
using namespace std;

void f(int i, int n) 
{
    if(i>n) return;
    cout << "tanvi ";
    f(i+1, n);
}

int main() {
    // Write C++ code here
    int n;
    cin >> n;
    f(1,n);
    return 0;
}
