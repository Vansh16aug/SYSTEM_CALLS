#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFF_S 11

int main(){
	int fileDes;
	char buffer[BUFF_S];
	fileDes=open("input.txt",O_RDONLY);
	lseek(fileDes,10,SEEK_SET);
	read(fileDes,buffer,BUFF_S-1);
	buffer[BUFF_S-1]='\0';
	printf("Characters from 11th and 20th posi %s\n",buffer);
	close(fileDes);
	return 0;
}