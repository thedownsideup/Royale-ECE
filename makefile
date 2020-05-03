all: main_royale.o Game.o Player.o Intelligence.o Strength.o Agility.o
	g++ -g main_royale.o Game.o Player.o Intelligence.o Strength.o Agility.o

clear: 
	rm *.o

clean: clear all

main_royale.o: src/main_royale.cpp
	g++ -c src/main_royale.cpp

Game.o: src/Game.cpp
	g++ -c src/Game.cpp

Player.o: src/Player.cpp
	g++ -c src/Player.cpp

Intelligence.o: src/Intelligence.cpp
	g++ -c src/Intelligence.cpp

Strength.o: src/Strength.cpp
	g++ -c src/Strength.cpp

Agility.o: src/Agility.cpp
	g++ -c src/Agility.cpp