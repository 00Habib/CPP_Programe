#include <iostream>
using namespace std;

int main() {
habib:
    cout << "  Play Tic Tac Toe Game\n" << endl;
    cout << "  Player_A = [X] and Player_B = [O]\n\n";
    char arr[3][3] = {0};
    int choice, enter, num = 0;
    char replay;
    int moveCount = 0;

    cout << " 	- - - - - - - - - - - - - - - - " << endl;
    cout << " 	|    " << arr[0][0] << "   |" << "   " << "   " << arr[0][1] << "   |" << "   " << arr[0][2] << "     |" << endl;
    cout << " 	- - - - - - - - - - - - - - - - " << endl;
    cout << " 	|    " << arr[1][0] << "   |" << "   " << "   " << arr[1][1] << "   |" << "   " << arr[1][2] << "     |" << endl;
    cout << " 	- - - - - - - - - - - - - - - - " << endl;
    cout << " 	|    " << arr[2][0] << "   |" << "   " << "   " << arr[2][1] << "   |" << "   " << arr[2][2] << "     |" << endl;
    cout << " 	- - - - - - - - - - - - - - - - " << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
label:
            cout << " Player 1 turn =";
            cin >> choice;
            switch (choice) {
                case 1:
                    if (arr[0][0] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label;
                    }
                    arr[0][0] = 'X';
                    break;
                case 2:
                    if (arr[0][1] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label;
                    }
                    arr[0][1] = 'X';
                    break;
                case 3:
                    if (arr[0][2] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label;
                    }
                    arr[0][2] = 'X';
                    break;
                case 4:
                    if (arr[1][0] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label;
                    }
                    arr[1][0] = 'X';
                    break;
                case 5:
                    if (arr[1][1] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label;
                    }
                    arr[1][1] = 'X';
                    break;
                case 6:
                    if (arr[1][2] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label;
                    }
                    arr[1][2] = 'X';
                    break;
                case 7:
                    if (arr[2][0] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label;
                    }
                    arr[2][0] = 'X';
                    break;
                case 8:
                    if (arr[2][1] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label;
                    }
                    arr[2][1] = 'X';
                    break;
                case 9:
                    if (arr[2][2] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label;
                    }
                    arr[2][2] = 'X';
                    break;
                default:
                    cout << " Invalid Number\nEnter Number From 1 to 9" << endl;
                    goto label;
            } //switch

            moveCount++;
            cout << " 	- - - - - - - - - - - - - - - - " << endl;
            cout << " 	|    " << arr[0][0] << "   |" << "   " << "   " << arr[0][1] << "   |" << "   " << arr[0][2] << "     |" << endl;
            cout << " 	- - - - - - - - - - - - - - - - " << endl;
            cout << " 	|    " << arr[1][0] << "   |" << "   " << "   " << arr[1][1] << "   |" << "   " << arr[1][2] << "     |" << endl;
            cout << " 	- - - - - - - - - - - - - - - - " << endl;
            cout << " 	|    " << arr[2][0] << "   |" << "   " << "   " << arr[2][1] << "   |" << "   " << arr[2][2] << "     |" << endl;
            cout << " 	- - - - - - - - - - - - - - - - " << endl;

            if ((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') ||
                (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') ||
                (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') ||
                (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') ||
                (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') ||
                (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') ||
                (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') ||
                (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')) {
                cout << " Player 1 Wins " << endl;
                num = num + 1;
                goto epic;
            }

            if (moveCount == 9) {
                cout << " Match has been Drawn" << endl;
                goto epic;
            }

label_:
            cout << " Player 2 turn =";
            cin >> choice;
            switch (choice) {
                case 1:
                    if (arr[0][0] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label_;
                    }
                    arr[0][0] = 'O';
                    break;
                case 2:
                    if (arr[0][1] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label_;
                    }
                    arr[0][1] = 'O';
                    break;
                case 3:
                    if (arr[0][2] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label_;
                    }
                    arr[0][2] = 'O';
                    break;
                case 4:
                    if (arr[1][0] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label_;
                    }
                    arr[1][0] = 'O';
                    break;
                case 5:
                    if (arr[1][1] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label_;
                    }
                    arr[1][1] = 'O';
                    break;
                case 6:
                    if (arr[1][2] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label_;
                    }
                    arr[1][2] = 'O';
                    break;
                case 7:
                    if (arr[2][0] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label_;
                    }
                    arr[2][0] = 'O';
                    break;
                case 8:
                    if (arr[2][1] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label_;
                    }
                    arr[2][1] = 'O';
                    break;
                case 9:
                    if (arr[2][2] != 0) {
                        cout << " Already occupied position. Enter Number again= " << endl;
                        goto label_;
                    }
                    arr[2][2] = 'O';
                    break;
                default:
                    cout << " Invalid Number\nEnter Number From 1 to 9" << endl;
                    goto label_;
            } //switch

            moveCount++;
            cout << " 	- - - - - - - - - - - - - - - - " << endl;
            cout << " 	|    " << arr[0][0] << "   |" << "   " << "   " << arr[0][1] << "   |" << "   " << arr[0][2] << "     |" << endl;
            cout << " 	- - - - - - - - - - - - - - - - " << endl;
            cout << " 	|    " << arr[1][0] << "   |" << "   " << "   " << arr[1][1] << "   |" << "   " << arr[1][2] << "     |" << endl;
            cout << " 	- - - - - - - - - - - - - - - - " << endl;
            cout << " 	|    " << arr[2][0] << "   |" << "   " << "   " << arr[2][1] << "   |" << "   " << arr[2][2] << "     |" << endl;
            cout << " 	- - - - - - - - - - - - - - - - " << endl;

            if ((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') ||
                (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') ||
                (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') ||
                (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') ||
                (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') ||
                (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') ||
                (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') ||
                (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')) {
                cout << " Player 2 Wins " << endl;
                num = num + 1;
                goto epic;
            }

            if (moveCount == 9) {
                cout << " Match has been Drawn" << endl;
                goto epic;
            }
        }
    }

epic:
    cout << " If you want to play again press y and want to exit press any key to terminate" << endl;
    cin >> replay;
    if (replay == 'y') {
        goto habib;
    } else {
        cout << " Game terminated";
    }

    return 0;
}

