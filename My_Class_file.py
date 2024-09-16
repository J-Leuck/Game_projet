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


    def logique_du_jeu(self, int a):


    def guide_intervalle_choix(self):


