//summ of numbers from 1 to n 
#include <iostream>
using namespace std; 
int main() {
    int n=50;
    int sum=0;

    for (int i=1;i<=n;i+=1){
        sum+=i;
    }
    cout << "sum="<< sum <<endl;
    return 0;

}