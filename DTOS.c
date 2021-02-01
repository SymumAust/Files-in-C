#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    argv[5]="hello.txt";
    FILE *fp;
    char ch;
    if(argc!=1){
        printf("You forgot to enter the filename");
        exit(1);
    }
    fp= fopen(argv[5],"r");
    if(fp==NULL){
        printf("Cannot open");
        exit(1);
    }
    ch = getc(fp);
    while(ch!=EOF){
        putchar(ch);
        ch =getc(fp);
    }

    fclose(fp);
    return 0;
}

