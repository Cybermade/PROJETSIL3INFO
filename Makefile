EXT = cpp
CXX=g++
CFLAGS=-Wall -I/urs/local/include
CFLAGS=
#LDFLAGS= -lGL -lGLEW -lGLU -lglut  -larmadillo
#LDFLAGS= -lGL -lGLU -lGLEW -lglut -lm 
LDFLAGS= -lGL -lGLU -lGLEW -lglut -ljpeg

#SRC=saisieinteractive.cpp courbe.cpp
SRC=$(wildcard *.$(EXT))
OBJ = $(SRC:.$(EXT)=.o)

DEBUBFLAG=-g

BIN=./
EXEC=main

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CXX)  -o $(BIN)$@ $^ $(LDFLAGS)

%.o: %.cpp
		$(CXX)  -o $@ -c $< $(CFLAGS)


clean:
		rm -rf *.o

mrproper: clean
		rm -rf $(BIN)$(EXEC)

