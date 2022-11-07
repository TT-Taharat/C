#include<bits/stdc++.h>
using namespace std;
class player
{
    string name;
    int TR;
    int TP;
    float AVG;
public:
    void input()
    {
        cin>>name>>TR>>TP;
    }
    void output()
    {
        cout<<name<<" "<<TR<<" "<<TP<<endl;
    }
    void calc()
    {
        AVG=TR/TP;
        cout<<AVG;
    }

};
int main()
{
    player TAHARAT;
    TAHARAT.input();
    TAHARAT.output();
    TAHARAT.calc();
    return 0;
}
