MATH	:=	mtx_add.c \
			mtx_dot.c \
			mtx_identity.c \
			mtx_product.c \
			mtx_scalar_mult.c \
			mtx_sub.c \
			mtx_transpose.c

OBJ := $(OBJ) $(MATH:.c=.o)

$(DIROBJ)/%.o: $(DIRMATH)/%.c $(INC)
	$(COMPIL)
