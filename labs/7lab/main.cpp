/* 
Andreas Neacsu
Oct 13, 2022
lab #7
*/
#include <iostream>
using namespace std;
/*For this lab you will be creating and testing a rectangle class. Rectangle objects should store 
the size of a rectangle and be able calculate things like the area and perimeter of 'themselves',
 and draw themselves as a series of *'s. For example,:*/
class Rectangle{
    private:
    int height;
    int length;
    public:
    Rectangle(){
        height = 0;
        length = 0;
    }
    void setValues(int, int);
    int getArea();
    int getPerimeter();
    void drawRectangle();
    void printRectangle();
};
int main(){
    int selectVar;
    Rectangle myRectangle = Rectangle();
    cout << "Height: ";
    int x = 0;
    cin >> x;
    cout << "Length: ";
    int y = 0;
    cin >> y;
    myRectangle.setValues(x, y);
    cout << "(1) area\n(2) perimeter\n(3) draw\n>> ";
    cin >> selectVar;
    switch(selectVar){
        case 1:
        cout << myRectangle.getArea() << "\n";
        break;
        case 2:
        cout << myRectangle.getPerimeter() << "\n";
        break;
        case 3:
        myRectangle.drawRectangle();
        break;
    }


}
void Rectangle::setValues(int x, int y){
    if(x < 0){
        x = x * -1;
        length = x;
    }else{
        length = x;
    }
    if(y < 0){
        y = y * -1;
        height = y;
    }else{
        height = y;
    }
}
int Rectangle::getArea(){
    int returnVal = height * length;
    return returnVal;
}
int Rectangle::getPerimeter(){
    int returnVal = (height*2)+(length*2);
    return returnVal;
}
void Rectangle::drawRectangle(){
    int x = 0;
    int i = 0;
    while(x < height){
        for(i = 0; i < length; i++){
            cout << "*";
        }
        cout << "\n";
        x++;
    }
}
void Rectangle::printRectangle(){
    cout << "Height: " << height << "\n";
    cout << "Length: " << length << "\n";
}