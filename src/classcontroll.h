#ifndef CLASSCONTROLL_H
#define CLASSCONTROLL_H

class ClassControl{

    public:
        static ClassControl *getInstance();
        RenderManager *getRenderManager() {return renderManager;}
        void setRm(RenderManager *x) {renderManager=x;}
        StateMachine *getStateMachine() {return stateMachine;}
        void setSm(StateMachine *x) {stateMachine=x;}
        EventManager *getEventManager() {return eventManager;}
        void setEventManager(EventManager *x) {eventManager=x;}

    private:
        /*!
         * \brief Jojop, náš singleton
         */
        static ClassControl *singleton;
        RenderManager *renderManager;
        StateMachine *stateMachine;
        EventManager *eventManager;

};


#endif // CLASSCONTROLL_H


