#include<iostream>
using namespace std;

void check_win(char game[3][3]) {
    
    for (int i = 0; i < 3; i++) {
        if (game[i][0] == game[i][1] && game[i][1] == game[i][2]) {
            if (game[i][0] == 'X') {
                cout << "Player 1 [X] wins!" << endl;
            } else if (game[i][0] == '0') {
                cout << "Player 2 [0] wins!" << endl;
            }
            return;
        }
    }

    
    for (int i = 0; i < 3; i++) {
        if (game[0][i] == game[1][i] && game[1][i] == game[2][i]) {
            if (game[0][i] == 'X') {
                cout << "Player 1 [X] wins!" << endl;
            } else if (game[0][i] == '0') {
                cout << "Player 2 [0] wins!" << endl;
            }
            return;
        }
    }

    
    if (game[0][0] == game[1][1] && game[1][1] == game[2][2]) {
        if (game[0][0] == 'X') {
            cout << "Player 1 [X] wins!" << endl;
        } else if (game[0][0] == '0') {
            cout << "Player 2 [0] wins!" << endl;
        }
        return;
    }

    
    if (game[0][2] == game[1][1] && game[1][1] == game[2][0]) {
        if (game[0][2] == 'X') {
            cout << "Player 1 [X] wins!" << endl;
        } else if (game[0][2] == '0') {
            cout << "Player 2 [0] wins!" << endl;
        }
        return;
    }

    
    bool isFull = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (game[i][j] != 'X' && game[i][j] != '0') {
                isFull = false;
                break;
            }
        }
        if (!isFull) break;
    }

    if (isFull) {
        cout << "It's a draw!" << endl;
    }
}

int main() {
    int choice, choice_2;
    string p1, p2;
    int input = 'X';
    int input_2 = '0';
    char game[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    cout << "\t\tT i c k   C r o s s   G a m e \n" << endl;
    cout << "\n\tEnter 1st player name:-";
    cin >> p1;
    cout << "\n\tEnter 2nd player name:-";
    cin >> p2;
    cout << "\n\t\t\t     |      |    " << endl;
    cout << "\t\t\t  " << game[0][0] << "  |   " << game[0][1] << "  |  " << game[0][2] << " " << endl;
    cout << "\t\t\t_____|______|______" << endl;
    cout << "\t\t\t     |      |    " << endl;
    cout << "\t\t\t  " << game[1][0] << "  |  " << game[1][1] << "   |  " << game[1][2] << " " << endl;
    cout << "\t\t\t_____|______|______" << endl;
    cout << "\t\t\t     |      |    " << endl;
    cout << "\t\t\t  " << game[2][0] << "  |  " << game[2][1] << "   |  " << game[2][2] << " " << endl;
    cout << "\t\t\t     |      |    " << endl;
    cout << "\n\t\t" << p1 << " is 1st player Your Symbol is X\n" << endl;
    cout << "\t\t" << p2 << " is 2nd player Your Symbol is 0\n" << endl;

    while (1) {
        cout << p1 << " [X] turn: " << endl;
        cin >> choice;
        switch(choice) {
            case 1:
                game[0][0] = input;
                break;
            case 2:
                game[0][1] = input;
                break;
            case 3:
                game[0][2] = input;
                break;
            case 4:
                game[1][0] = input;
                break;
            case 5:
                game[1][1] = input;
                break;
            case 6:
                game[1][2] = input;
                break;
            case 7:
                game[2][0] = input;
                break;
            case 8:
                game[2][1] = input;
                break;
            case 9:
                game[2][2] = input;
                break;
            default:
                cout << "Invalid input try again" << endl;
        }

        cout << "\n\t\t\t     |      |    " << endl;
        cout << "\t\t\t  " << game[0][0] << "  |   " << game[0][1] << "  |  " << game[0][2] << " " << endl;
        cout << "\t\t\t_____|______|______" << endl;
        cout << "\t\t\t     |      |    " << endl;
        cout << "\t\t\t  " << game[1][0] << "  |  " << game[1][1] << "   |  " << game[1][2] << " " << endl;
        cout << "\t\t\t_____|______|______" << endl;
        cout << "\t\t\t     |      |    " << endl;
        cout << "\t\t\t  " << game[2][0] << "  |  " << game[2][1] << "   |  " << game[2][2] << " " << endl;
        cout << "\t\t\t     |      |    " << endl;

        check_win(game);

        cout << p2 << " [0] turn: " << endl;
        cin >> choice_2;
        switch(choice_2) {
            case 1:
                if(game[0][0] != 'X' && game[0][0] != '0') 
                    game[0][0] = input_2;
                else
                    cout << "Already hold [X/0]" << endl;
                break;
            case 2:
                if(game[0][1] != 'X' && game[0][1] != '0') 
                    game[0][1] = input_2;
                else
                    cout << "Already hold [X/0]" << endl;
                break;
            case 3:
                if(game[0][2] != 'X' && game[0][2] != '0') 
                    game[0][2] = input_2;
                else
                    cout << "Already hold [X/0]" << endl;
                break;
            case 4:
                if(game[1][0] != 'X' && game[1][0] != '0') 
                    game[1][0] = input_2;
                else
                    cout << "Already hold [X/0]" << endl;
                break;
            case 5:
                if(game[1][1] != 'X' && game[1][1] != '0') 
                    game[1][1] = input_2;
                else
                    cout << "Already hold [X/0]" << endl;
                break;
            case 6:
                if(game[1][2] != 'X' && game[1][2] != '0') 
                    game[1][2] = input_2;
                else
                    cout << "Already hold [X/0]" << endl;
                break;
            case 7:
                if(game[2][0] != 'X' && game[2][0] != '0') 
                    game[2][0] = input_2;
                else
                    cout << "Already hold [X/0]" << endl;
                break;
            case 8:
                if(game[2][1] != 'X' && game[2][1] != '0') 
                    game[2][1] = input_2;
                else
                    cout << "Already hold [X/0]" << endl;
                break;
            case 9:
                if(game[2][2] != 'X' && game[2][2] != '0') 
                    game[2][2] = input_2;
                else
                    cout << "Already hold [X/0]" << endl;
                break;
            default:
                cout << "Invalid input, try again" << endl;
        }

        cout << "\n\t\t\t     |      |    " << endl;
        cout << "\t\t\t  " << game[0][0] << "  |   " << game[0][1] << "  |  " << game[0][2] << " " << endl;
        cout << "\t\t\t_____|______|______" << endl;
        cout << "\t\t\t     |      |    " << endl;
        cout << "\t\t\t  " << game[1][0] << "  |  " << game[1][1] << "   |  " << game[1][2] << " " << endl;
        cout << "\t\t\t_____|______|______" << endl;
        cout << "\t\t\t     |      |    " << endl;
        cout << "\t\t\t  " << game[2][0] << "  |  " << game[2][1] << "   |  " << game[2][2] << " " << endl;
        cout << "\t\t\t     |      |    " << endl;

        check_win(game);
    }

    return 0;
}
