SpaceDinosaur : Main.o Game.o Console.o Dialog.o DialogResponse.o Player.o GameObject.o GameState.o GameWorld.o Command.o
	g++ Main.o Game.o Console.o Dialog.o DialogResponse.o Player.o GameObject.o GameState.o GameWorld.o Command.o -o SpaceDinosaur

Main.o : Main.cpp
	g++ -c Main.cpp -o Main.o

Game.o : Game.cpp 
	g++ -c Game.cpp -o Game.o

Console.o : Console.cpp
	g++ -c Console.cpp -o Console.o

Command.o : Command.cpp
	g++ -c Command.cpp -o Command.o

Dialog.o : Dialog.cpp 
	g++ -c Dialog.cpp -o Dialog.o

DialogResponse.o : DialogResponse.cpp
	g++ -c DialogResponse.cpp -o DialogResponse.o

Player.o : Player.cpp
	g++ -c Player.cpp -o Player.o

GameObject.o : GameObject.cpp
	g++ -c GameObject.cpp -o GameObject.o

GameState.o : GameState.cpp
	g++ -c GameState.cpp -o GameState.o

GameWorld.o : GameWorld.cpp
	g++ -c GameWorld.cpp -o GameWorld.o

clean :
	rm -f *.o SpaceDinosaur
