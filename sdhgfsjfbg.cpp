#include <iostream>
using namespace std;
void max()
{
	int x, y;
    cout<<"Enter first number:"; 
    cin>>x;
    cout<<"Enter second number:"; 
    cin>>y;
    if(x>y)
    {
	cout<<"max: " <<x;
    }
    else
    {
	cout<<"max: "<<y;
    }
    return;
}
int main()
{
	max();
	return 0;
}
