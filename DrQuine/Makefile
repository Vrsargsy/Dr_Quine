COLLEEN			:= Colleen
GRACE			:= Grace
SULLY			:= Sully
CC				:= gcc
FLAGS			:= -Wall -Wextra -Werror
COLLEEN_SRC		:= Colleen.c
GRACE_SRC		:= Grace.c
SULLY_SRC		:= Sully.c
SRCS_PATH		:= ./
COLLEEN_SRCS	:= $(addprefix $(SRCS_PATH), $(COLLEEN_SRC))
GRACE_SRCS		:= $(addprefix $(SRCS_PATH), $(GRACE_SRC))
SULLY_SRCS		:= $(addprefix $(SRCS_PATH), $(SULLY_SRC))
OBJS			:= objs/
COLLEEN_OBJS	:= $(addprefix $(OBJS), $(COLLEEN_SRC:.c=.o))
GRACE_OBJS		:= $(addprefix $(OBJS), $(GRACE_SRC:.c=.o))
SULLY_OBJS		:= $(addprefix $(OBJS), $(SULLY_SRC:.c=.o))

.PHONY: all clean fclean re

all: $(COLLEEN) $(GRACE) $(SULLY)

$(OBJS)%.o: $(SRCS_PATH)%.c
	@mkdir $(OBJS) 2> /dev/null || true
	$(CC) $(FLAGS) -o $@ -c $<

$(COLLEEN): $(COLLEEN_OBJS)
	$(CC) $(FLAGS) $(COLLEEN_OBJS) -o $@

$(GRACE): $(GRACE_OBJS)
	$(CC) $(FLAGS) $(GRACE_OBJS) -o $@

$(SULLY): $(SULLY_OBJS)
	$(CC) $(FLAGS) $(SULLY_OBJS) -o $@

clean:
	@rm -fv $(COLLEEN_OBJS) $(GRACE_OBJS) Grace_kid.c $(SULLY_OBJS) Sully_*
	@rmdir $(OBJS) 2> /dev/null || true

fclean: clean
	@rm -fv $(COLLEEN) $(GRACE) $(SULLY)

re: fclean all