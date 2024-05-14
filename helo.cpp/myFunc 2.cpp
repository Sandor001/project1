#include  <iostream>
using namespace std;

unsigned long int Perimetr (unsigned short int lenght, unsigned short int width);
int main()
{
    unsigned short int lengthofYard;
    unsigned short int widthofYard;
    cout << "\n how wide is your yard ?";
    cin >> widthofYard;
    cout << "\n how long is your yard ?"; 
    cin >>  lengthofYard;

Perimetr (lengthofYard ,widthofYard);

cout << "\n your yard is ?";

cout <<  "Perimeter of yard";
return 0;

}
unsigned long int Perimetr (unsigned short int lenght, unsigned short int width)
{
    return (lenght + width) *2 ;    
}
