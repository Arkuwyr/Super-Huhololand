#ifndef STATEMACHINE_H
#define STATEMACHINE_H

class StateMachine {

    public:
        StateMachine();
        void drawMe() { state->drawMe(); }
        void update() { state->update(); }
        void pressedMouse(int x, int y, int z, bool b) { state->pressedMouse(x,y,z,b); }


    private:
        GameState *state;
};


#endif // STATEMACHINE_H
