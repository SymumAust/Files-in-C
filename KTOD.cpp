#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    argv[1]="My_File.txt";
    if(argc!=1){
        cout<<"USAGE: OUTPUT<My_File.txt>\n";
        return 1;
    }

    ofstream out (argv[1]);
    if(!out){
        cout<<"Cannot open output file.\n";
        return 1;
    }

    char str[80];
    cout<<"Write strings to disk. Enter ! to stop\n";

    do{
        cout<<":";
        cin>>str;
        out << str<< endl;
    }    while(*str != '!');

    out.close();
    return 0;


}
