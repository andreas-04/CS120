#include <iostream>
using namespace std;
#include <cstdlib>
void generate(int, double, double);
int main(){
    srand(0);
    generate(5, 10, 1);
    return 0;
}
void generate(int size, double upper, double lower){
    for(int i = 0; i < size; i++){
        double value  = lower + (fmod(rand() , upper));
        cout << value << "\n";
        // assign value to ith value in array
    }
}