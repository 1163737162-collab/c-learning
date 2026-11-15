# 第14章：指针和数组

继续放在昨天的学习目录：`~/Developer/c-learning/review/`，与 `chapter13_low_level`、`chapter15_dynamic_memory` 同级。沿用“章节目录 → 练习 → 两位编号”的方式。原来的文件不用移动，继续使用原来的 VS Code 工作区即可。

依据你上传的20页《第14章：指针和数组》制作，原件保存在 [讲义](讲义/第14章：指针和数组.pdf)。最后两道字符串指针题在第18–19页，第20页是指向关系图。

## 今天从这里开始

打开 [01_array_name.c](练习/01_array_name.c)。先写下预测，再填写 TODO，最后编译运行。一次只做一两个文件，不必一口气做完整章。

这些是可运行的练习骨架，**核心表达式和排序函数仍需你亲手填写，没有整套参考答案**。`0`、`NULL`、空函数及开关都是有意留下的占位。未填写时提示 TODO、打印占位值或提前结束是正常的；退出成功不等于练习已经做对。

## 分四次练

| 阶段 | 文件 | 讲义页码 | 过关要求 |
| --- | --- | --- | --- |
| 一：数组与指针 | `01_array_name.c` | 1–5、8 | 区分 `arr`、`&arr` 的类型和步长；完成六个 `sizeof` 表达式 |
| 一 | `02_pointer_access.c` | 4–5 | 四种写法读到同一个元素；通过指针修改原数组 |
| 一 | `03_char_pointer.c` | 6–8 | 区分可写数组和字符串字面量；分清地址比较和内容比较 |
| 二：传参与排序 | `04_array_parameter.c` | 9–10 | 求和并修改原数组；解释为何要传入长度 |
| 二 | `05_bubble_sort.c` | 11–12 | 自己写两层循环和交换，通过五组自测 |
| 二 | `06_bubble_optimized.c` | 12–13 | 加入每趟交换标志；正确排序，并减少有序数据的比较次数 |
| 三：二维结构 | `07_array_pointer.c` | 13–14 | 使用 `int (*p)[10]`；与 `int *p[10]` 区分 |
| 三 | `08_matrix_parameter.c` | 14–16 | 两种形参形式打印同一3×5数组；通过函数修改元素 |
| 三 | `09_pointer_rows.c` | 17–18 | 用指针数组保存各行地址；再试各行长度不同的情况 |
| 四：综合题 | `10_string_pointer_puzzles.c` | 18–20 | 先追踪 `pa`、`cpp`、`cp` 的变化，再运行原题核对 |

预测与复盘写在 [复习记录.md](复习记录.md)。第9页和第16页的尾后指针题也在记录中，作为第01/08题后的选做。对照原讲义时先看 [讲义注意点.md](讲义注意点.md)。

## 在 Mac 的 VS Code 编译运行

在原来的 VS Code 窗口里打开终端（Terminal → New Terminal），执行：

```sh
cd ~/Developer/c-learning/review/chapter14_pointer_array
ch14_build=$(mktemp -d /tmp/ch14.XXXXXX)
clang -std=c17 -Wall -Wextra -Wpedantic 练习/01_array_name.c -o "$ch14_build/01_array_name"
"$ch14_build/01_array_name"
```

换题时，把最后两行里的文件名都换掉。**每个 `.c` 都有自己的 `main`，一次只编译一个，不要把全部文件一起编译。** 输出放在临时目录，不覆盖源码。新开终端后重新执行 `cd` 和 `ch14_build=...`。

如果原窗口左侧只显示 `chapter13_low_level`，可用“文件 → 将文件夹添加到工作区…”选择同级的 `chapter14_pointer_array`，继续在这个窗口里做。若左侧已显示 `c-learning` 或 `review`，直接展开新目录即可。

找不到 `clang` 时，执行 `xcode-select --install`，按系统提示安装命令行工具。

写完后可再检查本次运行中的越界等错误，以第05题为例：

```sh
clang -std=c17 -Wall -Wextra -Wpedantic -g -O1 \
  -fsanitize=address,undefined -fno-omit-frame-pointer \
  练习/05_bubble_sort.c -o "$ch14_build/05_bubble_sort_check"
"$ch14_build/05_bubble_sort_check"
```

第05/06题需先完成函数，再把 `completed` 改为 `1`，才会执行自测。第10题先填写预测，再分别把 `run_one`、`run_two` 改为 `1`。这些开关只控制是否运行，不会自动完成 TODO。

## 怎样判断自己会了

1. 每题先写预测和理由；运行结果不一致时，改解释，别只改数字。
2. `sizeof` 题填写表达式，不把本机测到的字节数写死。地址会变化，比较的是类型、相等关系和步长。
3. 排序题测试逆序、有序、重复值、负数、单元素和空范围；填完后应全部通过。优化题还检查有序输入的比较次数。
4. 指针题能说清“现在指向谁、`+1` 跨过什么、能否解引用”。第10题每条语句执行后都画一次箭头。

交付时只验证骨架能编译、安全运行以及自测机制有效；你填写后的正确性需要重新编译验证。验证范围见 [验证记录.md](验证记录.md)。
