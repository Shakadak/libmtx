MATH	:=	mtx_add.c \
			mtx_adjugate.c \
			mtx_cofactor.c \
			mtx_determinant.c \
			mtx_dot.c \
			mtx_identity.c \
			mtx_minor.c \
			mtx_product.c \
			mtx_scalar_mult.c \
			mtx_sub.c \
			mtx_transpose.c \
			vec_dot.c

OBJ := $(OBJ) $(MATH:.c=.o)

$(DIROBJ)/%.o: $(DIRMATH)/%.c $(INC)
	$(COMPIL)
