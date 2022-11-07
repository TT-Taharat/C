#include<bits/stdc++.h>
using namespace std;
class triangle
{
    int a,b,c,area,perimeter;
public:

    void input( int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void calc()
    {
        area=0.5*a*b;
        cout<<area<<endl;

    }
    void calc2()
    {
        perimeter=a+b+c;
        cout<<perimeter<<endl;
    }

};
int main()
{
    triangle X;
    int a=3,b=4,c=5;
    X.input(a,b,c);
    X.calc();
    X.calc2();


    return 0;
}
