#include <iostream>
using namespace std;
float myFunc(unsigned short x, unsigned short y);
int main() 
{
    unsigned short x = 0, y=0;
    cout << "x: "  << endl;
    cin >> x;
    cout << "y: " << endl;
    cin >> y;
    float R= myFunc (x,y);
    if (R==-1)
    cout << "error\n";
    else 
    cout <<"R: "<< R <<endl;
    return 0;
}
float myFunc(unsigned short x, unsigned short y)
{
    if (y == 0)
        return -1;
    else
        return (float)x / y;
}
