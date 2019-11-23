# junior OS 32

基于i386架构的32位操作系统。（自学研究使用）

> power by UcoreOS.

## 学习目标 TODO
1. 基本实现Ucore中的中断处理 DOING
2. 实现基本物理内存管理方法（包括内存申请的方法）。和输入输出基本方法。为下一步做准备
3. 使用基本的C实现一个内核态的Lisp REPL环境。
4. 实现lisp load方法加载内核态的lisp文件
5. 使用lisp完成进程管理和文件系统
6. lisp 实现内核用户态方法和环境分离
7. lisp 实现基本应用命令 比如(mkdir)(cp)(ls)(mv)等
8. lisp 实现网络协议栈，完成联网的包管理工具


## DEBUG
```
i386-elf-gdb --arg qemu-system-i386 -S
```

## 幻想中的内核Lisp的语法
TODO

## 欢迎合作


# 资源
- [ucore学习资源](https://chyyuu.gitbooks.io/ucore_os_docs/content/lab8/lab8_3_1_ucore_fs_introduction.html)
- [如何写一个操作系统](https://blog.csdn.net/uunubt/article/details/99869390)
- [x86架构操作系统内核的实现](http://wiki.0xffffff.org/)
- [自己实现LISP解释器](https://github.com/Windfarer/mal-zh)
- [一种新的操作系统设计](http://www.yinwang.org/blog-cn/2013/04/14/os-design)
- [DevOSWiki](https://wiki.osdev.org/Main_Page)
- ...