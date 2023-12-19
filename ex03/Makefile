# Name of the final executable files
NAME = PolyProMax

# Project's directories
SRCS_FOLDER = srcs
OBJECTSDIR = objects
HEADERS_FOLDER = headers

# Name of variables
FLAGS = -Wall -Werror -std=c++98 #-Wextra

# Exercise files variable
SRC_FILES = AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp \
			main.cpp

# Define objects for all sources
OBJS := $(addprefix $(OBJECTSDIR)/, $(SRC_FILES:.cpp=.o))

# Name the compiler
CC = c++

# OS specific part
RM = rm -rf
RMDIR = rm -rf
MKDIR = mkdir -p

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -I $(HEADERS_FOLDER) $(OBJS) -o $@
	@echo "{DONE} PolyProMax has been created successfully."

$(OBJECTSDIR)/%.o: $(SRCS_FOLDER)/%.cpp $(HEADERS_FOLDER)
	@$(MKDIR) $(dir $@)
	@echo "Compiling $<:\r\t\t\t\t\t\t\t{DONE}"
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	@echo "deleting: " $(OBJECTSDIR)
	@$(RMDIR) $(OBJECTSDIR)

fclean: clean
	@echo "deleting: " $(NAME)
	@$(RM) $(NAME) $(ERRIGNORE)

re: fclean all
