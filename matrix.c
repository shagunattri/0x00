#include<stdio.h>

int main(int argc,char *argv[]) { //argument count and argument vector
    if(argc == 2) {
        printf("Hello %s\n",argv[1]);
    } else {
        fprintf(stderr,"Usage: %s <name>\n",argv[0]);
        return 1;   
    }
    return 0;
}
