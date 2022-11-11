#include<bits/stdc++.h>
using namespace std;
class area
{
     float  length,width,height,i,j,k,z;
     int volume1;

 public:
    void input()
    {
        cin>>length>>i>>width>>j>>height>>k;

    }
    void calc()
    {
        float p=i/12; float q=j/12; float r=k/12;
        float length1=length+p;
        float width1=width+q;
        float height1=height+r;
        float volume=length1*width1*height1;
        volume1=length1*width1*height1;
        float volume2=volume-volume1;
        z=volume2*12;

    }
    void output()
    {
        cout<<volume1 <<" "<< z <<endl;
        cout<<length<<" "<<i<<endl<<width<<" "<<j<<endl<<height<<" "<<k<<endl;
    }


};
int main()
{
    area p;
    p.input();
    p.calc();
    p.output();
    return 0;
}
