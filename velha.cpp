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
 * @author Rafael Mascarenhas Dal Moro 
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função VerificaVelha faz todos os testes para garantir se o jogo é válido,
 *  se está completo, se tem um vencedor, se foi empate ou se está indefinido. 
 *  Todas estas respostas são devidademente retornadas no formato de um inteiro
 */ 
int VerificaVelha(int velha[3][3]) {
    if (jogoValido(velha)) {
        if (jogoCompleto(velha)) {
            if (vencedorX(velha)) {
                return 1;   /*! <  vitória do X */
            } else if (vencedorO(velha)) {
                return 2;   /*! <  vitória do O */
            }
            return 0;
        } else {
            if (vencedorX(velha)) {
                return 1;    /*! <  vitória do X */
            } else if (vencedorO(velha)) {
                return 2;   /*! <  vitória do O */
            }
            return -1;   /*! <   resultado indefinido */
        }
    }
    return -2; /*! <   resultado inválido */
}
/** 
 * @brief verifica se X venceu o jogo 
 * @author Rafael Mascarenhas Dal Moro 
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função vencedorX faz todos os testes para garantir se o jogador X foi o vencedor.
 *  Em caso afirmativo, ela retorna verdadeiro, caso contrário, falso
 */ 
int vencedorX(int velha[3][3]) {
    int x = 1;
    if (linha1Venceu(x, velha)) {
        return TRUE;
    } else if (linha2Venceu(x, velha)) {
        return TRUE;
    } else if (linha3Venceu(x, velha)) {
        return TRUE;
    } else if (coluna1Venceu(x, velha)) {
        return TRUE;
    } else if (coluna2Venceu(x, velha)) {
        return TRUE;
    } else if (coluna3Venceu(x, velha)) {
        return TRUE;
    } else if (diagonal1Venceu(x, velha)) {
        return TRUE;
    } else if (diagonal2Venceu(x, velha)) {
        return TRUE;
    } else {
        return FALSE;
    }
}
/** 
 * @brief verifica se O venceu o jogo 
 * @author Rafael Mascarenhas Dal Moro 
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função vencedorX faz todos os testes para garantir se o jogador O foi o vencedor.
 *  Em caso afirmativo, ela retorna verdadeiro, caso contrário, falso
 */ 
int vencedorO(int velha[3][3]) {
    int O = 2;
    if (linha1Venceu(O, velha)) {
        return TRUE;
    } else if (linha2Venceu(O, velha)) {
        return TRUE;
    } else if (linha3Venceu(O, velha)) {
        return TRUE;
    } else if (coluna1Venceu(O, velha)) {
        return TRUE;
    } else if (coluna2Venceu(O, velha)) {
        return TRUE;
    } else if (coluna3Venceu(O, velha)) {
        return TRUE;
    } else if (diagonal1Venceu(O, velha)) {
        return TRUE;
    } else if (diagonal2Venceu(O, velha)) {
        return TRUE;
    } else {
        return FALSE;
    }
}
/** 
 * @brief verifica se o jogo da velha é válido
 * @author Rafael Mascarenhas Dal Moro 
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função jogoValido testa se o jogo possui mais jogadas do que deveria
 *  de um dos jogadores ou se existe mais de um vencedor.
 *  Em caso negativo, ela retorna verdadeiro, caso contrário, falso
 */ 
int jogoValido(int velha[3][3]) {
    int qntdX = 0;
    int qntdO = 0;
    for (int i = 0; i <  3; i++) {
        for (int j=0; j <  3; j++) {
            if (velha[i][j] == 1) qntdX++;
            if (velha[i][j] == 2) qntdO++;
        }
    }
    if ((qntdX == qntdO) || (qntdX == (qntdO + 1)) || (qntdO == (qntdX + 1))) {
        if ((vencedorX(velha) && vencedorO(velha)) == FALSE) {
            return TRUE;
        }
    }
    return FALSE;
}

/** 
 * @brief verifica se o jogo da velha está completamente jogado
 * @author Rafael Mascarenhas Dal Moro 
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função jogoCompleto testa se todas as jogadas possíveis já foram efetuadas.
 * Para tal, ela verifica a quantidade de zeros na matriz
 *  Em caso afirmativo, ela retorna verdadeiro, caso contrário, falso
 */ 
int jogoCompleto(int velha[3][3]) {
    for (int i = 0; i <  3; i++) {
        for (int j=0; j <  3; j++) {
            if (velha[i][j] == 0) return FALSE;
        }
    }
    return TRUE;
}

/** 
 * @brief verifica se houve vitoria na 1 linha da matriz
 * @author Rafael Mascarenhas Dal Moro 
 * @param  simbolo passa o icone do possivel jogador vencedor
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função linha1Venceu testa se o jogador do simbolo especificado venceu na
 *  primeira linha da matriz
 */ 
int linha1Venceu(int simbolo, int velha[3][3]) {
    return (velha[0][0] == simbolo &&
            velha[0][1] == simbolo &&
            velha[0][2] == simbolo);
}
/** 
 * @brief verifica se houve vitoria na 2 linha da matriz
 * @author Rafael Mascarenhas Dal Moro 
 * @param  simbolo passa o icone do possivel jogador vencedor
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função linha2Venceu testa se o jogador do simbolo especificado venceu na
 *  segunda linha da matriz
 */ 
int linha2Venceu(int simbolo, int velha[3][3]) {
    return (velha[1][0] == simbolo &&
            velha[1][1] == simbolo &&
            velha[1][2] == simbolo);
}
/** 
 * @brief verifica se houve vitoria na 3 linha da matriz
 * @author Rafael Mascarenhas Dal Moro 
 * @param  simbolo passa o icone do possivel jogador vencedor
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função linha3Venceu testa se o jogador do simbolo especificado venceu na
 *  terceira linha da matriz
 */ 
int linha3Venceu(int simbolo, int velha[3][3]) {
    return (velha[2][0] == simbolo &&
            velha[2][1] == simbolo &&
            velha[2][2] == simbolo);
}
/** 
 * @brief verifica se houve vitoria na 1 coluna da matriz
 * @author Rafael Mascarenhas Dal Moro 
 * @param  simbolo passa o icone do possivel jogador vencedor
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função coluna1Venceu testa se o jogador do simbolo especificado venceu na
 *  primeira coluna da matriz
 */ 
int coluna1Venceu(int simbolo, int velha[3][3]) {
    return (velha[0][0] == simbolo &&
            velha[1][0] == simbolo &&
            velha[2][0] == simbolo);
}
/** 
 * @brief verifica se houve vitoria na 2 coluna da matriz
 * @author Rafael Mascarenhas Dal Moro 
 * @param  simbolo passa o icone do possivel jogador vencedor
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função coluna2Venceu testa se o jogador do simbolo especificado venceu na
 *  segunda coluna da matriz
 */ 
int coluna2Venceu(int simbolo, int velha[3][3]) {
    return (velha[0][1] == simbolo &&
            velha[1][1] == simbolo &&
            velha[2][1] == simbolo);
}
/** 
 * @brief verifica se houve vitoria na 3 coluna da matriz
 * @author Rafael Mascarenhas Dal Moro 
 * @param  simbolo passa o icone do possivel jogador vencedor
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função coluna3Venceu testa se o jogador do simbolo especificado venceu na
 *  terceira coluna da matriz
 */ 
int coluna3Venceu(int simbolo, int velha[3][3]) {
    return (velha[0][2] == simbolo &&
            velha[1][2] == simbolo &&
            velha[2][2] == simbolo);
}
/** 
 * @brief verifica se houve vitoria na 1 diagonal da matriz
 * @author Rafael Mascarenhas Dal Moro 
 * @param  simbolo passa o icone do possivel jogador vencedor
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função diagonal1Venceu testa se o jogador do simbolo especificado venceu na
 *  primeira diagonal da matriz
 */ 
int diagonal1Venceu(int simbolo, int velha[3][3]) {
    return (velha[0][0] == simbolo &&
            velha[1][1] == simbolo &&
            velha[2][2] == simbolo);
}
/** 
 * @brief verifica se houve vitoria na 2 diagonal da matriz
 * @author Rafael Mascarenhas Dal Moro 
 * @param  simbolo passa o icone do possivel jogador vencedor
 * @param  velha passa uma cópia da matriz do jogo da velha para a função
 *  A função diagonal2Venceu testa se o jogador do simbolo especificado venceu na
 *  segunda diagonal da matriz
 */ 
int diagonal2Venceu(int simbolo, int velha[3][3]) {
    return (velha[0][2] == simbolo &&
            velha[1][1] == simbolo &&
            velha[2][0] == simbolo);
}
