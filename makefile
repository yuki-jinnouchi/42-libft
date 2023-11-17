# Program name and output directory
NAME = libft
OUTPUT_DIR = .

# Other directories
SOURCES_DIR = .
INCLUDES_DIR = .

# Files
SOURCES =	$(SOURCES_DIR)/ft_isalpha.c \
			$(SOURCES_DIR)/ft_isdigit.c \
			$(SOURCES_DIR)/ft_isalnum.c \
			$(SOURCES_DIR)/ft_isascii.c \
			$(SOURCES_DIR)/ft_isprint.c \
			$(SOURCES_DIR)/ft_strlen.c \
			$(SOURCES_DIR)/ft_memset.c \
			$(SOURCES_DIR)/ft_bzero.c \
			$(SOURCES_DIR)/ft_memcpy.c \
			$(SOURCES_DIR)/ft_memmove.c \
			$(SOURCES_DIR)/ft_strlcpy.c \
			$(SOURCES_DIR)/ft_strlcat.c \
			$(SOURCES_DIR)/ft_toupper.c \
			$(SOURCES_DIR)/ft_tolower.c \
			$(SOURCES_DIR)/ft_strchr.c \
			$(SOURCES_DIR)/ft_strrchr.c \
			$(SOURCES_DIR)/ft_strncmp.c \
			$(SOURCES_DIR)/ft_memchr.c \
			$(SOURCES_DIR)/ft_memcmp.c \
			$(SOURCES_DIR)/ft_strnstr.c \
			$(SOURCES_DIR)/ft_atoi.c \
			$(SOURCES_DIR)/ft_calloc.c \
			$(SOURCES_DIR)/ft_strdup.c

OBJECTS =	$(SOURCES:.c=.o)

HEADERS =	$(INCLUDES_DIR)/libft.h

# Compiler and options
CC = cc
CFLAGS += -Wall -Wextra -Werror
DEST = $(OUTPUT_DIR)

# Phony targets
.PHONY: all clean fclean re aclean ar

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

# all and clean (not mandatory)
aclean: all clean

# # create library
# ar: 