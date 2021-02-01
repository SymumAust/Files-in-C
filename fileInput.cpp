#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ofstream out("Inventory");
    if(!out){
        cout<<"Cannot Open Inventory\n";
        return 1;
    }

    out<<"Radius"<<39.01<<endl;
    out<<"TOasters"<<12.39<<endl;
    out<<"Mixers"<<8.23<<endl;
    out.close();
    return 0;

}
