多文件编译

方式一: 手动执行 `gcc`
```
a11@11m1max multi % gcc main.c helper.c -o my_program
a11@11m1max multi % ./my_program 
```

方式二: `make`  脚本

```
# 定义编译器
CC = gcc

# 定义编译选项
CFLAGS = -Wall

# 定义目标文件
TARGET = my_program

# 定义源文件和头文件
SRC = main.c helper.c
OBJ = $(SRC:.c=.o)

# 链接可执行文件
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# 生成每个 .o 文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理命令
clean:
	rm -f $(OBJ) $(TARGET)
```
实际执行命令

```
gcc -Wall -c main.c -o main.o
gcc -Wall -c helper.c -o helper.o
gcc main.o helper.o -o my_program
```