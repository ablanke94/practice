# Makefile for exam 1 lab
#
#TARGET	= example
TARGET	= prac.exe

#RM		= rm -f
RM		= del

FILES 	= main.cpp functions.cpp

OBJS 	= $(FILES:.cpp=.o)

all:	$(TARGET)

$(TARGET):	$(OBJS)
	g++ $^ -o $@

%.o:	%.cpp %.h
	g++ -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)
