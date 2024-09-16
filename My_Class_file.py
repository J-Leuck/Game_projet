#!/usr/bin/env python

import random

class Jeu():

    #No variables
    Pc_val = 0
    user_input = 0

    def __init__(self):
        pass

    
    def win_display(self, a) : 
        match a:
            case 1:
                print("No comment, you're the best \U0001F620 ")
            case 2:
                print("Paass maaalll \U0001F612")
            case 3:
                print("C etait limite huh \U0001F611")
    

    def loose_display(a):
        match a:
            case 1:
                self.user_input=input("AH AH AH Mauvais numero \n \U0001F47D Stress pas \U0001F47D \nChoose an other number: ")
            case 2:
                self.user_input=input("AH AH AH Mauvais numero \n \U0001F47D Stress pas \U0001F47D Last chance \nChoose an other number: ")
            case 2:
                print("Ouf \U0001F61B Encore un mauvais numero \U0001F61D \n The End \U0001F92D")
    

    #Le tir d'un chiffre compris entre 1 et 10
    def random_fonction(self) -> int:
        self.Pc_val=random.random(1, 10)
        return self.Pc_val

    #La logique du jeu et tous les guides possibles
    def logique_du_jeu(self):
        a=1
        test_val=False

        self.user_input=input("Choose a number between 1 and 10: " )
        while a<=3 or test_val==False:
            match self.user_input:
                case self.Pc_val:
                    test_val=True
                    win_display(a)
                case _:
                    loose_display(a)
    


    def guide_intervalle_choix(self):
        val_min = self.Pc_val - 1
        val.max = self.Pc_val + 1
        if (self.Pc_val == 0) : 
            val_min = 0
        if (self.Pc_val == 10):
            val_max =10
        print("[",val_min  , val_max,"]")

if __name__ == "__main__":
    Jeu.random_fonction()
    Jeu.logique_du_jeu()