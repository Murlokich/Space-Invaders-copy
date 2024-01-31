#ifndef GAME_ENTITY_H_
#define GAME_ENTITY_H_

namespace spaceInvaders {

class GameEntity {
protected:   
    int x, y;
    const int height, width;
public:
    static const int UNIT_PIXEL_SIZE = 20; 

    int getX() const;
    int getY() const;
    int getHeight() const;
    int getWidth() const;

    GameEntity(int x_, int y_, int height_, int width_);

    virtual ~GameEntity() = 0;  // to make the class abstract
};

}  // namespace spaceInvaders

#endif