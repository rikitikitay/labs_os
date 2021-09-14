CC=gcc # указываем компилятор
LDFLAGS= # флаги линковщика
CFLAGS=-c -MD# флаги компилятора
SOURCES=ls_imitator.c# список исходников
OBJECTS=$(SOURCES:.c=.o)
TARGET=ls # имя бинарника

all: $(TARGET)
    
$(TARGET): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.c 
	$(CC) $(CFLAGS) $< 

include $(wildcard   *.d)

clean:
	rm *.o *.d # $(TARGET)
