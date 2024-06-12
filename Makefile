helloworld : helloworld.cpp
	g++ -g helloworld.cpp -o helloworld

run : helloworld
	./helloworld

clean : 
	rm helloworld.exe