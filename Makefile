CC = gcc

CFLAGS = -Wall

EXE = colors

all: $(EXE)

$(EXE): colors.c
	@echo "Compiling \033[0;31mc\033[0;32mo\033[0;33ml\033[0;34mo\033[0;35mr\033[0;36ms\033[0m"
	@$(CC) $(CFLAGS) -o $@ $^

clean:
	@echo "\033[0;31mClean project\033[0m"
	@rm -f colors ||: