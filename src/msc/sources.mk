MSC	:=	mtx_dup.c \
		mtx_free.c \
		mtx_new.c

OBJ := $(OBJ) $(MSC:.c=.o)

$(DIROBJ)/%.o: $(DIRMSC)/%.c $(INC)
	$(COMPIL)
