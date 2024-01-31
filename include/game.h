#ifndef GAME_H_
#define GAME_H_

namespace spaceInvaders {

class Game {
private:
    bool gameOver = false;
    int lives = 3;
    int score = 0;
    int record_score;
    // Player player;
    // std::vector<Enemy> enemies
    // std::vector<Bunker> bunkers
    // Cannon cannon 
    // Renderer renderer
public:
    void run();
    [[nodiscard]] bool gameIsOver() const;
};

}  // namespace SpaceInvaders

#endif