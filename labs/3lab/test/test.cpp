#include <iostream>
using std::cout;



int main(){
    double start = 123;
    double end = 29;
    int sum = 0;
    while(int(start) <= int(end)){
        sum += start;
        start++;
    }
    cout << sum << "\n" ;

}