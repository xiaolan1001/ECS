# ECS
ECS下的所有文件均为存储在云服务器~/目录下的文件。

## mcams-1.3.0

### 以下为mcmas编译时出现的一些问题。

#### 1.
目录mcmas-1.3.0/cudd-2.5.0-exp/下的Makefile文件中，目标objlib，与声明伪目标时的名称不一致，  
即定义目标的名称为objlib，但上方声明伪目标.PHONY用的名称却是libobj。  
需要注意的是，这并不影响make objlib命令的执行，毕竟，当前所在文件夹并没有名称为objlib的文件。（伪目标的用途）


#### 2.
同样为目录mcmas-1.3.0/cudd-2.5.0-exp/下的Makefile文件中，all目标的命令存在错误。  
```
all:
    sh ./setup.sh
    @for dir in $(DIRS); do \
        (cd $$dir; \
        echo Making all in $$dir ...; \
	make CC=$(CC) RANLIB=$(RANLIB) MFLAG= MNEMLIB= ICFLAGS="$(ICFLAGS)" XCFLAGS="$(XCFLAGS)" DDDEBUG="$(DDDEBUG)" MTRDEBUG="$(MTRDEBUG)" LDFLAGS="$(LDFLAGS)" PURE="$(PURE)" EXE="$(EXE)" all )\
done
```
  注意到这里的`$(DIRS)`，包括`DIRS	= $(BDIRS) obj`，而`BDIRS	= cudd dddmp mtr st util epd`。
  其中obj目录的文件结构为：  
```
.
├── cuddObj.cc
├── cuddObj.hh
├── cuddObj.o
├── libobj.a
├── Makefile
├── .Makefile.swp
├── testobj.cc
└── tree.md
```
  可以看到obj下是包括有C++文件的，但all目标的编译命令用的是`gcc`，因此`gcc`命令无法处理C++文件，因此会报错。如有疑惑可以看objlib目标的代码，objlib目标做了分别处理。


#### 3.
mcmas1.3.0要求bison库版本号为2.4.1或者更高，但注意版本不能太高，bison最新版本已更至3.7.*，在新版本中C++ parser Interface 更改 `parser class name`的代码已修改，表现为
mcmas1.3.0/parser/目录下的nssis_new.yy文件中，`%define "parser_class_name" "mcmas_parser"` 须修改为 `%define api.parser.class {mcmas_parser}`。
建议在编译时遇到nssis_new.yy报错时再修改此处。

#### 4.
如遇到类似于cuddInt.h error时，且mcmas1.3.0/include/目录下的所有文件并没有完整代码（就只有一行`#include`），将include文件夹删掉，重新编译即可。
