#ifndef __JEU__
#define __JEU__


class jeu 
{
    public:
        jeu();
        virtual ~jeu();
        int aleatoire();
        void application(int x);
        
    private :
        int essai();
        void affichage(bool m_valide) const;
        int incrementation();
        int valeur_de_i();
        int get_y() const { return y;};
        void intervalle() const{
            int val_min = jeu.get_y - 1,
            int val_max = jeu.get_y + 1;
            if(jeu.get_y == 0){val_min = 0;}
            if(jeu.get_y == 10){val_max = 10;}
            std :: cout << "[" << val_min , val_max << "]" << endl;
        };
    
    int y;
    int val;
    int i;
    int ess;
    bool m_valide;

};






#endif