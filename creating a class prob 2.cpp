#include<bits/stdc++.h>
using namespace std;
class student
        {
        public:
            string address;
            int roll;
            int phn;
        };
        int main()
        {
            student sam;
            cin>>sam.roll>>sam.phn>>sam.address;
            cout<<sam.roll<<sam.phn<<sam.address<<endl;
            student john;
            cin>>john.roll>>john.phn>>john.address;
            cout<<john.roll<<john.phn<<john.address<<endl;


            return 0;
        }
