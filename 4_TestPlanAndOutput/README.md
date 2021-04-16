# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-----------------|-------------|----------------|------------------|
|  H_01       | If game over return 1                                        |  void           |   1         | 1              |Requirement based |
|  H_02       | User enters a cell number, his token should appear there     |  Integers 1 to 9|token appears in the cell|correct output|Scenario based |
|  H_03       | Invalid if user enters a number out of range                 |  Integers other then 1 to 9 |invalid | invalid |Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | If game is over exit the program                             |  void      | exit        | exit           |Requirement based |
|  L_02       | If no cells avilable exit the game                           |  integer 9 | exit        | exit           |Scenario based    |
