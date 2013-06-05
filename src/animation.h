#ifndef ANIMATION_H
#define ANIMATION_H

class Animation {

    public:
        Animation( std::string imgName, int sizeX, int sizeY, int x, int al );
        void update();
        void drawMe(int x, int y);
        void setState(int x) { state = x; }
    private:

        SDL_Surface *picture;
        /*!
         * \brief počet snímků obrázku
         */
        int frames;

        /*!
         * \brief aktuální snímek
         */
        int currentFrame;

        /*!
         * \brief délka animace v milisec
         */
        int animLength;

        /*!
         * \brief šířka
         */
        int width;

        /*!
         * \brief délka
         */
        int height;

        /*!
         * \brief aktuální stav animace
         */
        int state;



        /*
         *  TODO:
         *  Nevim, jestli si to pamatuju, už to je pár let co jsem to psal..
         *  Ale asi by to chtěl oupravit aby se to měnilo po milisec...
         *  Eeh, mám dojem, že jsem to tak (minimálně jsem chtěl) psal, ale uplně se teď nechápu.
         */
        /*!
         * \brief počet cyklů na jeden snímek (hmhuh?)
         */
        int cyclesForFrame;

        /*!
         * \brief cykly (hmhuh?)
         */
        int cycles;
};

#endif // ANIMATION_H
