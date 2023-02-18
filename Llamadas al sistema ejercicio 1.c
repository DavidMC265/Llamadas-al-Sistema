#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(){
	
int fd, n, m;

fd = open("archivo.txt", 1);
n= open("notas.txt", 1);
m= open("archivo.txt", 1);

if(fd < 0 || n<0 || m<0)
{
	if(errno == EAGAIN)
	{
		printf("Archivo bloqueado. \n");
		exit(1);
	}
	
	else if(errno == EACCES){
		printf("Problemas de permisos de archivo. \n");
		exit(1);	
	}
	
	else if(errno== EBADF){
		printf("Mal descriptor del archivo. \n");
		exit(1);
	}
	
	else
	{
		printf("Error desconocido. \n");
		exit(1);
	}
	
}// end if

}//end main 


