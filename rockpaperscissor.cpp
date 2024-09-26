#include <iostream>
#include <random>

class Hand{
    public:
        Hand(){
            //std::cout << "hand constructor" << std::endl;
        }
        ~Hand(){
            //std::cout << "hand destructor" << std::endl;
        }

        void rock(){
            std::cout << "Rock" << std::endl;    
        }

        void paper(){
            std::cout << "Paper " << std::endl;
        }

        void scissor(){
            std::cout << "Scissor " << std::endl;
        }
    
};

class MiniGame : public Hand{
    public:
        MiniGame(){}
        ~MiniGame(){}

        void play(int player1, int player2){
            //draw
            if (player1 == 1 && player2 == 1){
                std::cout << "Player1: ";
                rock();
                std::cout << "Player2: ";
                rock();

                std::cout << "Draw " << std::endl;
            }
            else if (player1 == 2 && player2 == 2){
                std::cout << "Player1: ";
                paper();
                std::cout << "Player2: ";
                paper();

                std::cout << "Draw " << std::endl;
            }
            else if (player1 == 3 && player2 == 3){
                std::cout << "Player1: ";
                scissor();
                std::cout << "Player2: ";
                scissor();

                std::cout << "Draw " << std::endl;
            }

            //player 1 wins
            else if (player1 == 1 && player2 == 3){
                std::cout << "Player1: ";
                rock();
                std::cout << "Player2: ";
                scissor();

                std::cout << "Player 1 wins " << std::endl;
            }
            else if (player1 == 2 && player2 == 1){
                std::cout << "Player1: ";
                paper();
                std::cout << "Player2: ";
                rock();

                std::cout << "Player 1 wins " << std::endl;
            }
            else if (player1 == 3 && player2 == 2){
                std::cout << "Player1: ";
                scissor();
                std::cout << "Player2: ";
                paper();

                std::cout << "Player 1 wins " << std::endl;
            }
            
            //player 2 wins
            else if (player1 == 3 && player2 == 1){
                std::cout << "Player1: ";
                scissor();
                std::cout << "Player2: ";
                rock();

                std::cout << "Player 2 wins " << std::endl;
            }
            else if (player1 == 1 && player2 == 2){
                std::cout << "Player1: ";
                rock();
                std::cout << "Player2: ";
                paper();

                std::cout << "Player 2 wins " << std::endl;
            }
            else if (player1 == 2 && player2 == 3){
                std::cout << "Player1: ";
                paper();
                std::cout << "Player2: ";
                scissor();

                std::cout << "Player 2 wins " << std::endl;
            }
        }

        int p1,p2;
};

int main(){
    MiniGame Boop;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> player(1 , 3);

    Boop.play(player(gen),player(gen));
    Boop.play(player(gen),player(gen));
    Boop.play(player(gen),player(gen));
    Boop.play(player(gen),player(gen));
    Boop.play(player(gen),player(gen));

    return 0;
}