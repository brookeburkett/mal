CC=gcc
CLFAGS= -Wall -Werror -Wextra 

MAINS=$(wildcard step*.cpp)
TARGETS=$(MAINS:%.cpp=%)
.PHONY: all clean
.SUFFIXES: .cpp .o

all: $(TARGETS)

