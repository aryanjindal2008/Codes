#include <iostream> //to check the entered character is uppercase ir lowercase
using namespace std ;
int main() {
    char ch;
    int up=0;
    int down=0;
    cout << "enter character";
    cin >> ch;

    if (ch>= 'a' && ch<='z') {
        cout <<"lowercase";
        down++;
        cout<< down;

    }if (ch>='A'&& ch<='Z') {
        cout <<"uppercase";
        up++;
        cout<< up;
    }
    return 0;
    
}