# comments
# Target : dependency
#<TAB>Command

PROJECT_NAME = project.exe
SRC = tic_tac_toe.c\
src\display_board.c\
src\game_instruction.c\
src\initialize_Board.c\
src\start_playing.c\
src\expose_winner.c

INC = inc

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) -I $(INC) -o $(PROJECT_NAME)

run: $(PROJECT_NAME)
	$(PROJECT_NAME)
