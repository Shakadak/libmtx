MSC	:=	mtx_new.c

OBJ := $(OBJ) $(MSC:.c=.o)

$(DIROBJ)/%.o: $(DIRMSC)/%.c $(INC)
	$(COMPIL)
