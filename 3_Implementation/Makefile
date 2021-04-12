# comments
# Target : dependency
#<TAB>Command

PROJECT_NAME = project.exe
SRC = tic_tac_toe.c\
src\column_check.c\
src\diagonal_check.c\
src\display_board.c\
src\game_instruction.c\
src\game_over.c\
src\row_check.c\
src\start_game.c\
src\winner.c

INC = inc

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) -I $(INC) -o project.exe

run: $(PROJECT_NAME)
	$(PROJECT_NAME)