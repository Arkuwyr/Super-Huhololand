#ifndef RENDERMANAGER_H
#define RENDERMANAGER_H


class RenderManager {

    public:
        RenderManager();
        void init();
        SDL_Surface *loadImage( std::string name );
        void applySurface( SDL_Surface *source, int offsetX, int offsetY, SDL_Rect * vyrez );
        void update() { SDL_Flip(screen); };
        void resize(int x, int y);
        void setFullscreen(){

            if(fullsc) {

                screen = SDL_SetVideoMode(scsize[0], scsize[1], 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
                fullsc = false;
            } else  {

                screen = SDL_SetVideoMode(scsize[0], scsize[1], 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_FULLSCREEN);
                fullsc = true;
            }
        };

        int* getScsize() {return scsize;};


    private:
        int scsize[2];
        bool fullsc;
        SDL_Surface *screen;
};


#endif // RENDERMANAGER_H
