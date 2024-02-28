#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(){
	char data[] ="Lit loves kushina";
	int fileDes;
	fileDes=open("file.txt",O_WRONLY|O_CREAT|O_APPEND,0644);
	write(fileDes,data,strlen(data));
	close(fileDes);
	return 0;
}