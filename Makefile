# Program name and output directory
NAME = libft.a
OUTPUT_DIR = .

# Other directories
SOURCES_DIR = .
INCLUDES_DIR = .

# Files
SOURCES = \
	\
	$(SOURCES_DIR)/ft_isalpha.c \
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
	$(SOURCES_DIR)/ft_strdup.c\
	$(SOURCES_DIR)/ft_substr.c \
	$(SOURCES_DIR)/ft_strjoin.c \
	$(SOURCES_DIR)/ft_strtrim.c \
	$(SOURCES_DIR)/ft_split.c \
	$(SOURCES_DIR)/ft_itoa.c \
	$(SOURCES_DIR)/ft_strmapi.c \
	$(SOURCES_DIR)/ft_striteri.c \
	$(SOURCES_DIR)/ft_putchar_fd.c \
	$(SOURCES_DIR)/ft_putstr_fd.c \
	$(SOURCES_DIR)/ft_putendl_fd.c \
	$(SOURCES_DIR)/ft_putnbr_fd.c

BONOUS_SOURCES = \
	$(SOURCES_DIR)/ft_lstnew.c \
	$(SOURCES_DIR)/ft_lstadd_front.c \
	$(SOURCES_DIR)/ft_lstsize.c \
	$(SOURCES_DIR)/ft_lstadd_back.c \
	$(SOURCES_DIR)/ft_lstdelone.c \
	$(SOURCES_DIR)/ft_lstclear.c \
	$(SOURCES_DIR)/ft_lstiter.c \
	$(SOURCES_DIR)/ft_lstmap.c

OBJECTS =	$(SOURCES:.c=.o)

BONUS_OBJECTS=$(BONOUS_SOURCES:.c=.o)
BONUS_OBJECTS+=$(OBJECTS) 

HEADERS =	$(INCLUDES_DIR)/libft.h

# Compiler and options
CC = cc
CFLAGS += -Wall -Wextra -Werror
DEST = $(OUTPUT_DIR)

# Phony targets
.PHONY: all clean fclean re aclean ar bonus

# Default target
all: $(NAME)

# main target
$(NAME):	$(OBJECTS) ar
#			$(CC) -o $(OUTPUT_DIR)/$(NAME) $(OBJECTS)

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

# create library
ar: 
	ar rcs $(OUTPUT_DIR)/$(NAME) $(OBJECTS)

# add bonus section
# bonus: all $(BONUS_OBJECTS)
# 	ar rcs $(NAME) $(BONUS_OBJECTS)