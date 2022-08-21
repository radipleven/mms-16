#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

int main(){
    int nums[] = {1,12, 123, 1234, 12345, 123456, 1, 2, 3},
        len = sizeof(nums)/sizeof(*nums),
        res = 0, 
        fd[2];

    pipe(fd);
    if (pipe(fd) == -1){
        perror("could not open pipe\n");
        return EXIT_FAILURE;
    }
    
    pid_t pid = fork();
    if (pid == 0){
        //child
        close(fd[0]);
        for (int i = 0; i < len/2; i++){
            res += nums[i];
        }
        printf("Sum1 = %d\n", res);
        write(fd[1], &res, sizeof(res));
        close(fd[1]);
    }else{
        //parent
        close(fd[1]);
        for (int i = len/2; i < len; i++){
            res += nums[i];
        }
        printf("Sum2 = %d\n", res);
        wait(NULL);

        int sumChild;
        read(fd[0], &sumChild, sizeof(sumChild));
        int total = sumChild + res;
        printf("Total = %d\n", total);
        close(fd[0]);    
    }
    
    return EXIT_SUCCESS;
}