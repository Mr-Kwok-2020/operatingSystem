#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
        printf("Hello Grayson~%d\n", i); 

    return 0;
}


// #include <unistd.h>
// #include <stdio.h>

// int main() {
//     pid_t pid = fork();  // 创建一个新的进程

//     if (pid == -1) {
//         // 如果 fork 出错
//         perror("fork failed");
//         return 1;
//     }

//     if (pid == 0) {
//         // 子进程的代码
//         printf("This is the child process, pid = %d\n", getpid());
//     } else {
//         // 父进程的代码
//         printf("This is the parent process, pid = %d, child pid = %d\n", getpid(), pid);
//     }

//     return 0;
// }
// git config --global user.name "Mr-Kwok-2020" 
// git config --global user.email "haokwok2002@163.com"


// ssh-keygen -t rsa -C "haokwok2002@163.com"
// ssh-keygen -t ecdsa -b 521 -C "haokwok2002@163.com"
