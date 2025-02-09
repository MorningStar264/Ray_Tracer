#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
  public:
    ray() {}

    ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}

    //Function to obtain the source of the ray
    const point3& origin() const  { return orig; }
    //Function to obtain the direction of a ray
    const vec3& direction() const { return dir; }

    //Function to obtain the point which in t unit of direction away from the origin
    point3 at(double t) const {
        return orig + t*dir;
    }

    //ray has source and direction
  private:
    point3 orig;
    vec3 dir;
};

#endif