#ifndef RENDERMANAGER_H
#define RENDERMANAGER_H


class RenderManager {

    public:
    bool fullsc;   //hodnota kterou je vždy při zmenšení okna nastavit na 0 (vypnuty), jinak nebude fullscrean pracovat.
        RenderManager();
        void init();
        SDL_Surface *loadImage( std::string name );
        void applySurface( SDL_Surface *source, int offsetX, int offsetY, SDL_Rect * vyrez );
        void update() { SDL_Flip(screen); };
        
        void resize(int x, int y){                       //podle poslaných hodnot zvětší /zmenší okno (již otevřené)
        Window.Create (sf::VideoMode (x, y, 32),"XxY");
        }
        
        void setFullscreen(bool fullsc){

            if (fullsc == false){
                Window.Create (sf::VideoMode (800, 600, 32), "Fullscreen", sf::Style::Fullscreen); //při volání funkce se rozhodne zdali už okno není zvětšno
            fullsc = true;                                                                         // pokud není tak tak učiní, brání tak několikanásovnýmu fullsreenu
            }
        }

        int* getScsize() {                            //nakonec to takle nechávám
            return scsize;};


    private:
        int scsize[2];
        SDL_Surface *screen;
};


#endif // RENDERMANAGER_H
