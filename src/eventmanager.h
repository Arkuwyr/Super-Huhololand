#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

class EventManager {


    public:
        EventManager(): done(false) {};
        bool getDone() { return done; };
        void update();
        void finish() { done = true; };

    private:
        bool done;
};

#endif // EVENTMANAGER_H
