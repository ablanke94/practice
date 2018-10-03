# Makefile for exam 1 lab
#
#TARGET	= example
TARGET	= exam1.exe

#RM		= rm -f
RM		= del

FILES 	= main.cpp compare.cpp

OBJS 	= $(FILES:.cpp=.o)

all:	$(TARGET)

$(TARGET):	$(OBJS)
	g++ $^ -o $@

%.o:	%.cpp %.h
	g++ -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)
