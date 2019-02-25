#ifndef PLACER_H_INCLUDED
#define PLACER_H_INCLUDED

struct Position;

typedef void(*PLACE_FN)(Registry &, const Position &);

struct Placer
{
    PLACE_FN place;
};

#endif