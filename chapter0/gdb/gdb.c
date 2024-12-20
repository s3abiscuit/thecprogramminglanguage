#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    pid_t child_pid = fork();
    if (child_pid == 0) {
        // 子进程：请求被跟踪
        ptrace(PTRACE_TRACEME, 0, NULL, NULL);
        execl("/bin/ls", "ls", NULL); // 执行一个命令
    } else {
        // 父进程：调试器
        int status;
        wait(&status); // 等待子进程停止
        if (WIFSTOPPED(status)) {
            printf("Child stopped, continuing...\n");
            ptrace(PTRACE_CONT, child_pid, NULL, NULL); // 继续执行子进程
        }
        wait(NULL); // 等待子进程结束
    }
    return 0;
}