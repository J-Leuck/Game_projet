#!/usr/bin/env python

import random

class Jeu():
    #No variables
    Pc_val = 0
    user_input = 0
    
    def __init__(self):
        pass

    #Le tir d'un chiffre compris entre 1 et 10
    def random_fonction(self) -> int:
        self.Pc_val=random.random(1, 10)
        return self.Pc_val


    def logique_du_jeu(self):
        pass        

    def win_display(self, a) : 
        match a:
            case 1:
                print("No comment, you're the best \U0001F620 ")
            case 2:
                print("Paass maaalll \U0001F612")
            case 3:
                print("C etait limite huh \U0001F611")
    
    
    def guide_intervalle_choix(self):
        val_min = self.Pc_val - 1
        val.max = self.Pc_val + 1
        if (self.Pc_val == 0) : 
            val_min = 0
        if (self.Pc_val == 10):
            val_max =10
        print("[",val_min  , val_max,"]")


