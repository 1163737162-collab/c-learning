/* 权限标志：初始无权限；设置读、写、执行；检查各权限；清除写，切换删除和执行，输出最终状态。 */
#include <stdio.h>

int main(void)
{
    enum
    {
        READ = 1u << 0,
        WRITE = 1u << 1,
        EXEC = 1u << 2,
        DELETE = 1u << 3
    };
    unsigned int permission = 0;

    permission |= READ;
    permission |= WRITE;
    permission |= EXEC;
    printf("修改前:\n");
    if (permission & READ)
        printf("有读权限\n");
    if (permission & WRITE)
        printf("有写权限\n");
    if (permission & EXEC)
        printf("有执行权限\n");
    if (permission & DELETE)
        printf("有删除权限\n");
    permission &= ~WRITE;
    permission ^= DELETE;
    permission ^= EXEC;
    printf("修改后:\n");
    if (permission & READ)
        printf("有读权限\n");
    if (permission & WRITE)
        printf("有写权限\n");
    if (permission & EXEC)
        printf("有执行权限\n");
    if (permission & DELETE)
        printf("有删除权限\n");
    return 0;
}
