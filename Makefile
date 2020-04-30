#
#
# Makefile for GCW Zero
#
#

TARGET = alex4

#CC = mipsel-linux-gcc
CC = gcc

CFLAGS = -O2 -Wall -Wno-deprecated-declarations
LDFLAGS = -laldmb -ldumb -lalleg -lm

OBJ = \
	src/actor.o src/bullet.o src/control.o src/edit.o src/hisc.o \
	src/main.o src/map.o src/options.o src/particle.o src/player.o \
	src/script.o src/scroller.o src/shooter.o \
	src/token.o src/timer.o
	

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $^ $(LDFLAGS) -o $@

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean :
	del src/*.o
