MATH	:=	mtx_identity.c \
			mtx_product.c \
			mtx_scalar_mult.c \
			mtx_transpose.c

OBJ := $(OBJ) $(MATH:.c=.o)

$(DIROBJ)/%.o: $(DIRMATH)/%.c $(INC)
	$(COMPIL)
