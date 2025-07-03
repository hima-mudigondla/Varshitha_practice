#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fd;

    for(int i=1;i>0;i++)
    {
    
      fd = open("/sys/class/leds/user/brightness", O_WRONLY);
        if (fd == -1) 
        {
            perror("Failed to open brightness file");
            return 1;
        }

	if(i%2==0)
	{
        write(fd, "1", 1);
	printf("LED on\n");
        }
        else
        {
        write(fd,"0",1);
	printf("LED off\n");
        }
        close(fd);
        sleep(1);

     
  }

    return 0;
}

