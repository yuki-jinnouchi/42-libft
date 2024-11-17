# Program name and output directory
NAME = libft.a
OUTPUT_DIR = .

# Other directories
SOURCES_DIR = .
BONUS_DIR = .
INCLUDES_DIR = .

# Files
SOURCES = \
	$(filter-out \
		$(wildcard $(SOURCES_DIR)/ft_ls*.c), \
		$(wildcard $(SOURCES_DIR)/*.c))
OBJECTS =	$(SOURCES:.c=.o)

# BONUS_SOURCES = \
# 	$(wildcard $(BONUS_DIR)/ft_ls*.c)
# BONUS_OBJECTS = 	$(BONUS_SOURCES:.c=.o)
# BONUS_OBJECTS += 	$(OBJECTS) 

HEADERS =	$(INCLUDES_DIR)/libft.h

# Compiler and options
CC = cc
CFLAGS += -Wall -Wextra -Werror
DEST = $(OUTPUT_DIR)

# Phony targets
.PHONY: all clean fclean re aclean ar bonus

# Targets
all: $(NAME)
$(NAME): $(OBJECTS)
	@echo "----------------"
	@echo "make OBJECTS done.\n"
	ar rcs $@ $(OBJECTS)
	@echo "----------------"
	@echo "make $(NAME) done.\n"
%.o: %.c
	$(CC) $(CFLAGS) -h $(HEADERS) -c $< -o $@
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(OUTPUT_DIR)/$(NAME)
re: fclean all
aclean: all clean
ar: 
	ar rcs $(OUTPUT_DIR)/$(NAME) $(OBJECTS)
# bonus:
# 	all $(BONUS_OBJECTS)
# 	ar rcs $(NAME) $(BONUS_OBJECTS)
