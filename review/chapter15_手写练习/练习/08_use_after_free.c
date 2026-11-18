/*
第8题：笔试题4——释放后使用（讲义第11～12页）
先分析原题核心代码，不要执行错误版本：
    char *str = malloc(100);
    strcpy(str, "hello");
    free(str);
    if (str != NULL) { strcpy(str, "world"); printf(str); }
1. 想一想free之后，str会不会自动变成NULL？
2. 判断非NULL能否证明str指向的空间仍然有效；分析继续访问的后果。
3. 写安全版本：申请并检查，存入hello并打印；释放后置NULL。
4. 如果还要保存world，就重新申请、检查并使用新空间，最后释放。
预期安全版本依次打印hello和world，各一行。

代码请自己写。
*/
