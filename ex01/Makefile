#=================================================================
#  _
#      //\
#     | \/		     O=* MY AWESOME PHONEBOOK *=o
#     ||~                                             _     _
#     ||_                                            [ L___I ]
#     | /\                                          |   ...   |
#    ,@\\/    ,@@@,            ,@@@@@,              |   :::   |
#    @,    ,@@"   "@@@,     ,@@"     "@@@,    ,@@@@"|   '''   |
#    "@@@@@"          "@@@@@"            "@@@@"     '========='
#
# ================================================================

CC = c++
CFLAGS = -std=c++98

SRC = PhoneBook.cpp	Contact.cpp myTools.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

# ================================================================

NAME = Phonebook

# ================================================================

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $< -c -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re