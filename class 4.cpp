#include<bits/stdc++.h>
using namespace std;
class area
{
     int length,breadth;

public:
    void setDim()
    {
        cin>>length>>breadth;
    }
    float getArea()
    {
       return (.5)*length*breadth; ;
    }
};
int main()
{
    area rectangle;
    rectangle.setDim();
    cout<<rectangle.getArea();
    return 0;
}
