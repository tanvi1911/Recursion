// Print 1 To N Without Loop Using Recursion

#include <iostream>
using namespace std;

 int cnt =1;
    void printNos(int N)
    {
        //Your code here
        
        if(cnt > N) return;
        cout << cnt << " ";
        cnt++;
        printNos(N);
    }

int main() {
    // Write C++ code here
    printNos(22);
    return 0;
}
