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