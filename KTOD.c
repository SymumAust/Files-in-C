#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    argv[2]="hel.txt","symum.txt";
    FILE *fp;
    char ch;
    if(argc!=1){
        printf("You forgot to enter the filename");
        exit(1);
    }
    fp= fopen(argv[2],"w");
    if(fp==NULL){
        printf("Cannot open");
        exit(1);
    }

    do{
        ch = getchar();
        putc(ch, fp);
    }while(ch!= '$');
    fclose(fp);
    return 0;
}
