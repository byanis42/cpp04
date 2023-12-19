# Name of the final executable files
NAME = ./PolyPro

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
Brain.cpp \

# Define objects for all sources
OBJS := $(addprefix $(OBJECTSDIR)/, $(SRC_FILES:.cpp=.o))

# Name the compiler
CC = c++

# OS specific part
RM = rm -rf
RMDIR = rm -rf
MKDIR = mkdir -p

all: $(NAME)

$(NAME): $(OBJS) main.o
	@$(CC) -I $(HEADERS_FOLDER) $(OBJS) $(OBJECTSDIR)/main.o -o $@

$(OBJECTSDIR)/%.o: $(SRCS_FOLDER)/%.cpp $(HEADERS_FOLDER)
	@$(MKDIR) $(dir $@)
	@echo "Compiling $<:\r\t\t\t\t\t\t\t{DONE}"
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $@ -c $<

main.o: main.cpp $(HEADERS_FOLDER)
	@echo "Compiling $<:\r\t\t\t\t\t\t\t{DONE}"
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $(OBJECTSDIR)/$@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	@echo "deleting: " $(OBJECTSDIR)
	@$(RMDIR) $(OBJECTSDIR)

fclean: clean
	@echo "deleting: " $(NAME)
	@$(RM) $(NAME) $(ERRIGNORE)

re: fclean all
