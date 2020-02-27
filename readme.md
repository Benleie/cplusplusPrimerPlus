为了写Qt,开始学习C++
+ ANSI C   传统K&R C

## chapter4 Compound Types
### 4.1 
+ C++标准模板库STL vector

### 4.2 字符串
+ C-style string 空字符 
+ string类库
+ string constant   string literal 字符数组初始化
+ 每次读取一行字符串输入 getline()
+ 为什么使用get()  便于处理错误
+ C++常使用指针而非数组来处理字符串

### 4.3 string类简介





## chapter3
### 3.1 简单变量
+ 基本整型 char short int long   有无符号
+ sizeof操作符返回类型或变量的长度
+ 通常一字节(byte)为存储八位的内存空间
+ bool, char, signed char, unsigned char, short, unsigned short, int, unsigned int, long, unsigned long

### 3.4
+ setf()成员函数
+ 潜在的类型转化问题
+ 整型提升(integral promotion) 在计算表达式时，C++将bool, char, signed char, unsigned char, short转换为int
+ 强制类型转换的格式






## chapter2
### 2.1
+ 在C++中,让函数头的括号空着等效于在括号中使用void
+ 在C中，则意味着对是否接受参数保持沉默	
+ 预处理器
+ 插入操作符
+ 控制符 endl
+ 转义序列 换行符
+ white space:空格，制表符，回车
+ token 标记

### 2.2
+ C  所有的变量声明通常都位于函数或过程的开始位置
+ C++ 在首次使用变量前声明它
+ 可以连续使用 赋值操作符

### 2.3
类库

### 2.4 函数
+ 函数原型之于函数就像变量声明之于变量 function prototype
+ 库文件包含了函数定义，头文件包含了函数原型