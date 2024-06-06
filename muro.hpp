#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Muro : public Drawabable{
    private:
        vector<Sprite> sprites;
        vector<pair<int, int>> state;
    public:
        Muro(int x, int y, Texture &texture);
        void Pos(vector<Vector2f> &pos);

        virtual void draw(RenderTarget &rt, RenderStates rs) const;
}