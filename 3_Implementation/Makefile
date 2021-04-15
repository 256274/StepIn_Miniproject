# comments
# Target : dependency
#<TAB>Command

PROJ_NAME = tictactoe
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = ttt.c\
src\display_board.c\
src\gameover.c\
src\delay.c\
src\game_instruction.c\
src\initialize_Board.c\
src\start_playing.c\
src\expose_winner.c

TEST_SRC = test/test_ttt.c\
unity/unity.c

INC = inc

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

$(PROJ_NAME): $(SRC)
	gcc $(SRC) -I $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: $(PROJ_NAME)
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc -I $(INC) $(SRC) $(TEST_SRC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
