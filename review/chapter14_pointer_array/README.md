# 第14章：指针和数组

每个练习文件只有题目，程序由你从头编写。按 `练习/01_array_name.c` 到 `10_string_pointer_puzzles.c` 顺序做，运行后把代码和结果发给我检查。讲义在 `讲义/` 中。

## Mac 编译运行

在 VS Code 终端执行：

```sh
cd ~/Developer/c-learning/review/chapter14_pointer_array
clang -std=c17 -Wall -Wextra -Wpedantic 练习/01_array_name.c -o /tmp/ch14_01
/tmp/ch14_01
```

把文件名换成正在做的题，每题单独编译。写出完整的 main 后才能运行。

先前的代码框架保留在 `原框架备份/`，需要对照时再看。

## 参考答案

每题写完或卡住后，可以打开 `参考答案/` 中同名文件对照。单独编译方法和练习一样，把命令里的 `练习/` 换成 `参考答案/`。第01题直接保留讲义中的 `sizeof(arr + 0)` 表达式，clang 可能提示它得到的是指针大小，这是该题的观察重点，不影响运行。
