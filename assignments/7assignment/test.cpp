#include <iostream>
using namespace std;
void changeX(int);

int main(){

    int x = 0;

    changeX(x);

    cout << x;

}

void changeX(int x){

    x += 5;

}