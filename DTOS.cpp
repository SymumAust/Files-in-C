
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    argv[1]="My_File.txt";
    if(argc!=1){
        cout<<"USAGE: OUTPUT<My_File.txt>\n";
        return 1;
    }

    ifstream in (argv[1]);
    if(!in){
        cout<<"Cannot open output file.\n";
        return 1;
    }

    char str[80];

    cout<<"Write strings to disk. Enter ! to stop\n";

    while(*str != '!'){
            in >> str;

        cout << str<<endl;

    }

    in.close();
    return 0;


}
