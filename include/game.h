namespace spaceInvaders {

class Game {
private:
    bool gameOver = false;
    int lives = 3;
    int score = 0;
    int record_score;
    // Player player;
    // std::vector<Enemy> enemies
    // std::vector<Barrier> barriers
    // Cannon cannon 
    // Renderer renderer
public:
    void run();
    [[nodiscard]] bool gameIsOver() const;
};

}  // namespace SpaceInvaders