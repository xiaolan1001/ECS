TARGET = 1_3
CPP_FILES = $(shell ls *.cpp)
BASE = $(basename $(CPP_FILES))
OBJS = $(addsuffix .o, $(addprefix obj/, $(BASE)))
CC = gcc
CXX = g++

default : $(TARGET)

$(TARGET) : $(OBJS)
	-rm -f $@
	$(CXX) -o $(TARGET) $(OBJS)

obj/%.o : %.cpp
	@if test ! -d "obj"; then \
		mkdir -p obj; \
	fi;
	$(CXX) -c $< -o $@

clean :
	-rm -f $(TARGET)
	-rm -f obj/*.o