#include <iostream>
using namespace std;
int binarytodec(int binaryNum){
    int ans =0 , pow=1 ;
    while (binaryNum>0){
        int rem=binaryNum%10;
        ans +=rem*pow;
        binaryNum/=10;
        pow*=2;

    }
    return ans;
}
int main () {
    cout << binarytodec(101)<<endl;
    return 0;
}