#include <iostream>
using namespace std;

class Frame
{
    private:
    int height;
    int width;
    public:
    Frame();
    Frame(int);
    Frame(int, int);
    void set(int, int);
    void draw();
};
/*int main()
{
    Frame f1(3);
    f1.draw();
    return 0;
}*/
Frame::Frame()
{
    height = 1;
    width = 1;
}
Frame::Frame(int heightAndWidth)
{
    height = heightAndWidth;
    width = heightAndWidth;
}
Frame::Frame(int theheight, int thewidth)
{
    height  = theheight;
    width = thewidth;
}
void Frame::set(int heightInput, int  widthInput)
{
    if(heightInput == 0) height = 1;
    if(widthInput == 0) width = 1;
    else
    {
        height = heightInput;
        width = widthInput;
    }
}
void Frame::draw()
{
    int top_bottom = width + 2;
    for(int k = 0; k < top_bottom; k++)
    {
        if(k == top_bottom - 1)
        {
            cout << '*' << endl;
        }else
        {
            cout << '*';
        }
    };
    for(int i =0; i < height; i++)
    {
        cout << '*';
        for(int j = 0; j < width; j++)
        {
            cout << ' ';
        }
        cout << '*' << endl;
    }
    for(int k = 0; k < top_bottom; k++)
    {
        if(k == top_bottom - 1)
        {
            cout << '*' << endl;
        }else
        {
            cout << '*';
        }
    };
}