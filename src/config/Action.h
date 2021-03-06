/*

    Zelda Navi's Quest

    Copyright (C) 2013-2014  Vincent Jouillat

    Please send bugreports with examples or suggestions to www.zeldaroth.fr

*/

#ifndef __ACTION_H__
#define __ACTION_H__

enum ActionType {UP, DOWN, LEFT, RIGHT, PUSH_UP, PUSH_DOWN, PUSH_LEFT, PUSH_RIGHT, RUN, HIT, HIT2, LOAD, LOAD2, ACTION, ENTER, CARRY, TALK, NAVI,
#ifdef __vita__
    TROC_ITEMS, DISPLAY_MAP, MAP_1, MAP_2, MAP_3, MAP_4, MAP_5, MAP_6, MAP_7, MAP_8, MAP_9, QUIT_GAME, ULTI, AIDE, ONI, MENU_ITEMS, NB_ACTIONS};
#else
    TROC_ITEMS, DISPLAY_MAP, MAP_1, MAP_2, MAP_3, MAP_4, MAP_5, MAP_6, MAP_7, MAP_8, MAP_9, QUIT_GAME, ULTI, AIDE, ONI, NB_ACTIONS};
#endif

class Action {
    public :
        Action();
        ~Action();

        void setAction(ActionType key, bool b);
        bool isAction(ActionType key);
    private :
        bool actions[NB_ACTIONS];
};

#endif  // Action.h
