#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
	
	int fd, n;
	float arr[] = {1.25 ,2.5, 3.25 , 4.5 , 5.25};
	
	fd= creat("datos.txt", 777);	
	n= write (fd, arr, sizeof(arr));
	
	close(fd);	
	return 0;
	
}// end main 




