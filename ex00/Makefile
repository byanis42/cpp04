# Name of the final executable files
NAME = ./PolyMini

# Project's directories
SRCS_FOLDER = srcs
OBJECTSDIR = objects
HEADERS_FOLDER = headers

# Name of variables
FLAGS = -Wall -Wextra -Werror -std=c++98

# Exercise files variable
SRC_FILES = Cat.cpp \
Dog.cpp \
Animal.cpp \
WrongCat.cpp \
WrongAnimal.cpp

# Define objects for all sources
OBJS := $(addprefix $(OBJECTSDIR)/, $(SRC_FILES:.cpp=.o))

# Name the compiler
CC = c++

# OS specific part
RM = rm -rf
RMDIR = rm -rf
MKDIR = mkdir -p
MAKE = make -C
ECHO = /bin/echo
ERRIGNORE = 2>/dev/null

all: $(NAME)

$(NAME): $(OBJS) main.o
	@$(CC) -I $(HEADERS_FOLDER) $(OBJS) $(OBJECTSDIR)/main.o -o $@

$(OBJECTSDIR)/%.o: $(SRCS_FOLDER)/%.cpp $(HEADERS_FOLDER)
	@$(MKDIR) $(dir $@)
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $@ -c $<

main.o: main.cpp $(HEADERS_FOLDER)
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $(OBJECTSDIR)/$@ -c $<

clean:
	@$(RMDIR) $(OBJECTSDIR)

fclean: clean
	@$(RM) $(NAME) $(ERRIGNORE)

re: fclean all
