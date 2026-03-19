import os

def clear():
    os.system('cls' if os.name == 'nt' else 'clear')

def print_board(board):
    print("\n")
    for i in range(3):
        row = board[i*3:(i+1)*3]
        print("  " + " | ".join(row))
        if i < 2:
            print("  ---------")
    print("\n")

def check_winner(board, player):
    wins = [
        [0,1,2], [3,4,5], [6,7,8],  # rows
        [0,3,6], [1,4,7], [2,5,8],  # cols
        [0,4,8], [2,4,6]             # diagonals
    ]
    return any(all(board[i] == player for i in combo) for combo in wins)

def tic_tac_toe():
    board = [str(i+1) for i in range(9)]  # ['1','2',...,'9']
    current = 'X'

    print("=== TIC TAC TOE ===")
    print("Positions:")
    print_board(board)

    for turn in range(9):
        clear()
        print_board(board)
        print(f"Player {current}'s turn")

        while True:
            try:
                move = int(input("Enter position (1-9): ")) - 1
                if 0 <= move <= 8 and board[move] not in ('X', 'O'):
                    break
                print("Invalid move, try again.")
            except ValueError:
                print("Please enter a number.")

        board[move] = current

        if check_winner(board, current):
            clear()
            print_board(board)
            print(f"🎉 Player {current} wins!")
            break

        if turn == 8:
            clear()
            print_board(board)
            print("It's a draw!")
            break

        current = 'O' if current == 'X' else 'X'

    if input("\nPlay again? (y/n): ").lower() == 'y':
        tic_tac_toe()

tic_tac_toe()