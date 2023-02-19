#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

 int main()
 {

 int fd, n;
 fd = open("datos2.txt", 777);

 n = write(fd, &fd, sizeof(fd));

printf("%d", fd);
close(fd);
 return 0;
 
}//end main
