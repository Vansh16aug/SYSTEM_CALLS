#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fileDes;
	fileDes=open("file.txt",O_CREAT | O_RDONLY ,0644);
	close(fileDes);
	return 0;
}