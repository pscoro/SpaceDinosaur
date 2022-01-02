SpaceDinosaur : Main.o Game.o Console.o
	g++ Main.o Game.o Console.o -o SpaceDinosaur

Main.o : Main.cpp
	g++ -c Main.cpp -o Main.o

Game.o : Game.cpp
	g++ -c Game.cpp -o Game.o

Console.o : Console.cpp
	g++ -c Console.cpp -o Console.o

clean :
	rm -f *.o SpaceDinosaur
