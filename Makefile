SpaceDinosaur : Main.o Game.o
	g++ Main.o Game.o -o SpaceDinosaur

Main.o : Main.cpp
	g++ -c Main.cpp -o Main.o

Game.o : Game.cpp
	g++ -c Game.cpp -o Game.o

clean :
	rm -f *.o SpaceDinosaur
