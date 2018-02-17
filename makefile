CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g


OBJS = Barbarian.o BlueMen.o Character.o Die.o HarryPotter.o Medusa.o simpleMenu.o Source.o Vampire.o
SRCS = Barbarian.cpp BlueMen.cpp Character.cpp Die.cpp HarryPotter.cpp Medusa.cpp simpleMenu.cpp Source.cpp Vampire.cpp
HEADERS = Barbarian.hpp BlueMen.hpp Character.hpp Die.hpp HarryPotter.hpp Medusa.hpp simpleMenu.hpp Vampire.hpp


Project3: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o Project3

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: 
	rm -f ${OBJS}
	rm -f Project3
