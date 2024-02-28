#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFF_S 1024

int main(){
	char buffer[BUFF_S];
	int readFd,writeFd;
	readFd=open("source.txt",O_RDONLY);
	writeFd=open("destination.txt",O_CREAT|O_WRONLY|O_TRUNC,0644);

	ssize_t byteRead;
	while((byteRead=read(readFd,buffer,BUFF_S))>0){
		write(writeFd,buffer,byteRead);
	}
	close(readFd);
	close(writeFd);
	return 0;
}