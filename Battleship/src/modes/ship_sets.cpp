#include "ship_sets.hpp"

StandardShips::StandardShips()
: patrol_boat({0, 0}, {0, 0}), submarine({0, 0}, {0, 1}),
    destroyer({0, 0}, {0, 2}), carrier({0, 0}, {0, 3}) {};

std::vector<const Figure*> StandardShips::get() const {
    return {&patrol_boat, &patrol_boat, &patrol_boat, &patrol_boat,
            &submarine, &submarine, &submarine,
            &destroyer, &destroyer,
            &carrier};
}


TriangleShips::TriangleShips()
        : patrol_boat({{0, 0}, {1, 0}, {1, 1}}), submarine({{0, 0}, {1, 0}, {1, 1}, {1, 2}}),
          destroyer({{0, 0}, {1, 0}, {1, 1}, {1, 2}, {1, 3}}) {};

std::vector<const Figure*> TriangleShips::get() const {
    return {&patrol_boat, &patrol_boat, &patrol_boat,
            &submarine, &submarine,
            &destroyer};
}


FunnyShips::FunnyShips()
        : zigzag({{0, 0}, {0, 1}, {1, 1}, {1, 2}}), t_shape({{0, 0}, {1, 0}, {1, 1}, {2, 0}}),
          c_shape({{0, 0}, {0, 1}, {1, 1}, {2, 1}, {2, 0}}) {};

std::vector<const Figure*> FunnyShips::get() const {
    return {&zigzag, &zigzag,
            &t_shape, &t_shape,
            &c_shape, &c_shape};
}