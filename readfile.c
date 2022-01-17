#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[]){
       
    if (argc == 0){
        return -1;
    }
    int fd = open(argv[1], O_RDONLY);
    char line[2048];
    int counter = read(fd, line, sizeof line);
    counter= write(1,line,counter);
    close(fd);
    return 0;

}