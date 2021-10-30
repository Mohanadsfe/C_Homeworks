CC=gcc
OBJS=advancedClassificationLoop.o advancedClassificationRecursion.o basicClassification.o main.o
EXEC=program
DEBUG = -g
CFLAGS = -std=c99  -Wall -Werror $(DEBUG)

$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $@


advancedClassificationLoop.o: advancedClassificationLoop.c advancedClassificationLoop.h
advancedClassificationRecursion.o: advancedClassificationRecursion.c advancedClassificationRecursion.h
basicClassification.o: basicClassification.c basicClassification.h  
main.o: main.c advancedClassificationLoop.h  advancedClassificationRecursion.h basicClassification.h

clean: 
	rm -f $(EXEC) $(OBJS)