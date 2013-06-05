#include "classcontroll.h"

ClassControl *ClassControl::singleton = NULL;

ClassControl *ClassControl::getInstance() {

    if(!singleton)
        singleton = new ClassControl();

        return singleton;
}
