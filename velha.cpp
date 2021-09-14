/**
 * Copyright 2021 Rafael Mascarenhas Dal Moro - License at Repository's markdown
 * Trabalho 1 - Metodos de Programacao
 * Autor: Rafael Mascarenhas Dal Moro
 * Matricula: 17/0021041
 * \file  velha.cpp
 */


#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 *  Descrever o que a funcao faz
 */ 



int VerificaVelha(int velha[3][3]) {
    if(jogoValido(velha)){
        if(jogoCompleto(velha)){
            if(vencedorX(velha)){
                return 1;
            }else if(vencedorO(velha)){
                return 2;
            }
        }else{
            if(vencedorX(velha)){
                return 1;
            }else if(vencedorO(velha)){
                return 2;
            }
            return -1;
        }
        
    }
    return -2; /*!< retorna zero para teste */
}

int vencedorX(int velha[3][3]){
    int x = 1;
    if(linha1Venceu(x,velha)){
        return TRUE;
    }else if(linha2Venceu(x,velha)){
        return TRUE;
    }else if(linha3Venceu(x,velha)){
        return TRUE;
    }else if(coluna1Venceu(x,velha)){
        return TRUE;
    }else if(coluna2Venceu(x,velha)){
        return TRUE;
    }else if(coluna3Venceu(x,velha)){
        return TRUE;
    }else if(diagonal1Venceu(x,velha)){
        return TRUE;
    }else if(diagonal2Venceu(x,velha)){
        return TRUE;
    }else {
        return FALSE;
    }
}

int vencedorO(int velha[3][3]){
    int O = 2;
    if(linha1Venceu(O,velha)){
        return TRUE;
    }else if(linha2Venceu(O,velha)){
        return TRUE;
    }else if(linha3Venceu(O,velha)){
        return TRUE;
    }else if(coluna1Venceu(O,velha)){
        return TRUE;
    }else if(coluna2Venceu(O,velha)){
        return TRUE;
    }else if(coluna3Venceu(O,velha)){
        return TRUE;
    }else if(diagonal1Venceu(O,velha)){
        return TRUE;
    }else if(diagonal2Venceu(O,velha)){
        return TRUE;
    }else {
        return FALSE;
    }
}
int jogoValido(int velha[3][3]){
    int qntdX = 0;
    int qntdO = 0;
    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            if(velha[i][j] == 1) qntdX++;
            if(velha[i][j] == 2) qntdO++;
        }
    }
    if((qntdX == qntdO) || (qntdX == (qntdO + 1)) || (qntdO == (qntdX + 1))){
        return TRUE;
    } 
    return FALSE;
}

int jogoCompleto(int velha[3][3]){
   for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            if(velha[i][j] == 0) return FALSE;
        }
    }
    return TRUE;
}

int linha1Venceu(int simbolo, int velha[3][3]){
    return (velha[0][0] == simbolo && velha[0][1] == simbolo && velha[0][2] == simbolo);
}
int linha2Venceu(int simbolo, int velha[3][3]){
    return (velha[1][0] == simbolo && velha[1][1] == simbolo && velha[1][2] == simbolo);
}
int linha3Venceu(int simbolo, int velha[3][3]){
    return (velha[2][0] == simbolo && velha[2][1] == simbolo && velha[2][2] == simbolo);
}
int coluna1Venceu(int simbolo, int velha[3][3]){
    return (velha[0][0] == simbolo && velha[1][0] == simbolo && velha[2][0] == simbolo);
}
int coluna2Venceu(int simbolo, int velha[3][3]){
    return (velha[0][1] == simbolo && velha[1][1] == simbolo && velha[2][1] == simbolo);
}
int coluna3Venceu(int simbolo, int velha[3][3]){
    return (velha[0][2] == simbolo && velha[1][2] == simbolo && velha[2][2] == simbolo);
}
int diagonal1Venceu(int simbolo, int velha[3][3]){
    return (velha[0][0] == simbolo && velha[1][1] == simbolo && velha[2][2] == simbolo);
}
int diagonal2Venceu(int simbolo, int velha[3][3]){
    return (velha[0][2] == simbolo && velha[1][1] == simbolo && velha[2][0] == simbolo);
}


