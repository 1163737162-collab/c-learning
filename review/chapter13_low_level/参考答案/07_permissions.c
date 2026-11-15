/* 权限标志：初始无权限；设置读、写、执行；检查各权限；清除写，切换删除和执行，输出最终状态。 */
#include <stdio.h>

int main(void)
{
    enum { READ = 1u << 0, WRITE = 1u << 1, EXEC = 1u << 2, DELETE = 1u << 3 };
    unsigned int permission = 0;

    permission |= READ | WRITE | EXEC;
    printf("initial: read=%s write=%s exec=%s delete=%s\n",
           permission & READ ? "on" : "off", permission & WRITE ? "on" : "off",
           permission & EXEC ? "on" : "off", permission & DELETE ? "on" : "off");
    permission &= ~WRITE;
    permission ^= DELETE;
    permission ^= EXEC;
    printf("final: read=%s write=%s exec=%s delete=%s\n",
           permission & READ ? "on" : "off", permission & WRITE ? "on" : "off",
           permission & EXEC ? "on" : "off", permission & DELETE ? "on" : "off");
    return 0;
}
