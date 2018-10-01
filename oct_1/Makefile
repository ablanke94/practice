# Makefile
#
#TARGET	= example
TARGET	= example.exe

#RM		= rm -f
RM		= del

FILES 	= main.cpp

OBJS 	= $(FILES:.cpp=.o)

all:	$(TARGET)

$(TARGET):	$(OBJS)
	g++ $^ -o $@

%.o:	%.cpp %.h
	g++ -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)
