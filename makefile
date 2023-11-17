# Program name and output directory
NAME = libft
OUTPUT_DIR = .

# Other directories
SOURCES_DIR = srcs
INCLUDES_DIR = includes

# Files
SOURCES =	$(SOURCES_DIR)/00_main.c \
			$(SOURCES_DIR)/01_import.c \
			$(SOURCES_DIR)/02_parse.c \
			$(SOURCES_DIR)/03_check_map_error.c \
			$(SOURCES_DIR)/04_ft_solve.c \
			$(SOURCES_DIR)/04.1_ft_solve.c \
			$(SOURCES_DIR)/05_output.c \
			$(SOURCES_DIR)/05.1_sub_output.c \
			$(SOURCES_DIR)/07_free.c \
			$(SOURCES_DIR)/09_ft_util.c \
			# $(SOURCES_DIR)/10_ft_dict_struct.c \
			# $(SOURCES_DIR)/81_ft_util_01.c \
			# $(SOURCES_DIR)/82_ft_util_02.c \
			# $(SOURCES_DIR)/83_ft_util_03.c \
			# $(SOURCES_DIR)/80_ft_util_vals.c \
			# $(SOURCES_DIR)/10_ft_output.c \

OBJECTS =	$(SOURCES:.c=.o)

HEADERS =	$(INCLUDES_DIR)/ft.h

# Compiler and options
CC = cc
CFLAGS += -Wall -Wextra -Werror
DEST = $(OUTPUT_DIR)

# Phony targets
.PHONY: all clean fclean re

# Default target
all: $(NAME)

# main target
$(NAME):	$(OBJECTS)
			$(CC) -o $(OUTPUT_DIR)/$(NAME) $(OBJECTS)
#			ar rcs $(OUTPUT_DIR)/$(NAME) $(OBJECTS)

# Compile source files
%.o: %.c
	$(CC) $(CFLAGS) -I $(HEADERS) -c $< -o $@

# Clean temporary files
clean:
	rm -f $(OBJECTS)

# Clean all generated files
fclean: clean
	rm -f $(OUTPUT_DIR)/$(NAME)

# Rebuild the project
re: fclean all

# all and clean
aclean: all clean
