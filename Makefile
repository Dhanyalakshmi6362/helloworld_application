helloworld: helloworld_application.o
	${CC} ${CFLAGS} ${LDFLAGS} -o helloworld helloworld_application.o
	
helloworld_application.o: helloworld_application.c helloworld_application.h
	${CC} ${CFLAGS} -c -o helloworld_application.o helloworld_application.c
	
clean: 
	@rm -f helloworld_application.o helloworld
