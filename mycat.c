#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[]){
       
    if (argc == 0){
        char line[2048];
        int counter = read(0, line, sizeof line);
        counter= write(1,line,counter);
    }
    for(int i = 1; i<argc;i++){
        int fd = open(argv[1], O_RDONLY);
        char line[2048];
        int counter = read(fd, line, sizeof line);
        while(counter>0){
            write(1,line,counter);
            counter = read(fd,line,sizeof line);
        }
    close(fd);
    }

    return 0;

}