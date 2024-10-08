#include <stdio.h>

/**
 * 1.	你输入 123Enter，终端缓冲区会存储：'1', '2', '3', '\n'（回车）
 * 2.	getchar() 每次读取一个字符，并使用 putchar() 输出该字符。
 * 3.	最终输出的结果是：123 加上一个换行符。
 * 4.   如果输入 123ctrl+D, 这个时候终端会输出 123 并继续执行
 * 5.   Ctrl+D 只是提交当前缓冲区的输入
 */

int main(int argc, char const *argv[])
{
    int c;
    // EOF: ctrl + D
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }

    return 0;
}