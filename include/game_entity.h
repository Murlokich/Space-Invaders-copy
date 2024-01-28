
namespace spaceInvaders {

class GameEntity {
private:    
    int x, y;
    const int height, width;
public:
    int getX() const;
    int getY() const;
    int getHeight() const;
    int getWidth() const;

    GameEntity(int x_, int y_, int height_, int width_);

    virtual ~GameEntity() = 0;  // to make the class abstract
};

}  // namespace spaceInvaders