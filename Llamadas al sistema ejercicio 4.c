#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
	
	int fd, n;
	fd= creat("datos2.txt", 777);

	float array[5] = {1.79, 3.50, 2.9, 7.25, 9.50};
   int loop;

   for(loop = 0; loop < 5; loop++){
   	
   	 n = write(fd, &fd, sizeof(fd));
   	 printf("El valor de n es igual a  = %d  para %f \n", loop,array[loop]);

  }
	close(fd);
	
	return 0;
}// end main 

