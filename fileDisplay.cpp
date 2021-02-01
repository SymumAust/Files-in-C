#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in("Inventory");
    if(!in){
        cout<<"Cannot open inventory \n";
        return 1;
    }
    char item[20];
    float cost;
    in>> item>> cost;
    cout<<item<<" "<<cost<<endl;
    in>> item>> cost;
    cout<<item<<" "<<cost<<endl;
    in>> item>> cost;
    cout<<item<<" "<<cost<<endl;
    in.close();
    return 0;


}

