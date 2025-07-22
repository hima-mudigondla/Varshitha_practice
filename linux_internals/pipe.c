#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
	int fds[2];
        int res,i;
        char *buf1="Hima Varshitha";
        char buf2[14];
        res = pipe(fds);
        printf("Return value of pipe is : %d\n",res);
        write(fds[1],buf1,14);
        read(fds[0],buf2,14);
        for(i=0;i<14;i++)
        printf("%c",buf2[i]);
        printf("\n");
	return 0;
}
