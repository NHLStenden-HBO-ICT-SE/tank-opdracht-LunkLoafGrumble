#pragma once

namespace Tmpl8
{
class Particle_beam
{
  public:
    Particle_beam();
    Particle_beam(vec2 min, vec2 max, Sprite* particle_beam_sprite, int damage);

    void tick(vector<Tank>& tanks);
    void draw(Surface* screen);

    vec2 min_position;
    vec2 max_position;

    Rectangle2D rectangle;

    int sprite_frame;

    int damage;

    Sprite* particle_beam_sprite;
};
}