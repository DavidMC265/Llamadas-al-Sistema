#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

 // This function writes a value in the specified file
 int main()
 {
 // fd is the file descriptor
 int fd, n;
 fd = open("datos.txt", 777);

 n = write(fd, &fd, sizeof(fd));

printf("%d", fd);
close(fd);
 return 0;
 
  }
  
  
  
