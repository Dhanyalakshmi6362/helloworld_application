helloworld: helloworld_application.c helloworld_application.h
	${CC} -o helloworld helloworld_application.c
	
clean:
	@rm helloworld
