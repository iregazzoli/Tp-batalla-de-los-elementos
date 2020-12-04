tp2: main.o character.o list.o node.o fire_character.o water_character.o air_character.o rock_character.o
		g++ main.o character.o list.o node.o fire_character.o water_character.o air_character.o rock_character.o -o tp2

# testo: test.o character.o list.o node.o fire_character.o
# 		g++ test.o character.o list.o node.o fire_character.o -o testo

main.o: main.cpp
	g++ -c main.cpp

personaje.o: character.cpp
	g++ -c character.cpp

lista.o: list.cpp
	g++ -c list.cpp

node.o: node.cpp
	g++ -c node.cpp

fire_character.o: fire_character.cpp
	g++ -c fire_character.cpp

water_character.o: water_character.cpp
	g++ -c water_character.cpp

air_character.o: air_character.cpp
	g++ -c air_character.cpp

rock_character.o: rock_character.cpp
	g++ -c rock_character.cpp

clean:
	rm *.o tp2
