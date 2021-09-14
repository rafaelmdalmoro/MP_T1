/**
 * Copyright 2021 Rafael Mascarenhas Dal Moro - License at Repository's markdown
 * Trabalho 1 - Metodos de Programacao
 * Autor: Rafael Mascarenhas Dal Moro
 * Matricula: 17/0021041
 * \file  testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/** 
 * @brief verifica possiveis partidas em um jogo da velha
 * @author Rafael Mascarenhas Dal Moro 
 *  TEST_CASE é um caso de teste com 23 assertivas que testam
 *  diferentes casos de uma partida de jogo da velha. São testados jogos válidos e inválidos, definidos
 *  ou não e com vitórias de ambos os jogadores
 */ 
TEST_CASE("Testa velha", "[single-file]") {
    // X vence
    int vitoriaX_1[3][3]= {   { 2, 0, 1 },
                              { 2, 0, 1 },
                              { 0, 2, 1 }
    };
    int vitoriaX_2[3][3]= {   { 2, 1, 2 },
                              { 2, 1, 0 },
                              { 0, 1, 2 }
    };
    int vitoriaX_3[3][3]= {   { 1, 0, 2 },
                              { 1, 2, 0 },
                              { 1, 2, 2 }
    };
    int vitoriaX_4[3][3]= {   { 1, 0, 2 },
                              { 2, 1, 0 },
                              { 2, 2, 1 }
    };
    int vitoriaX_5[3][3]= {   { 2, 0, 1 },
                              { 2, 1, 0 },
                              { 1, 2, 2 }
    };
    int vitoriaX_6[3][3]= {   { 1, 1, 1 },
                              { 2, 0, 0 },
                              { 0, 2, 2 }
    };
    int vitoriaX_7[3][3]= {   { 0, 2, 0 },
                              { 1, 1, 1 },
                              { 0, 2, 2 }
    };
    int vitoriaX_8[3][3]= {   { 0, 2, 0 },
                              { 2, 0, 2 },
                              { 1, 1, 1 }
    };
    // O vence
    int vitoriaO_1[3][3]= {   { 1, 0, 2 },
                              { 1, 0, 2 },
                              { 0, 1, 2 }
    };
    int vitoriaO_2[3][3]= {   { 1, 2, 0 },
                              { 1, 2, 0 },
                              { 0, 2, 1 }
    };
    int vitoriaO_3[3][3]= {   { 2, 0, 0 },
                              { 2, 1, 0 },
                               { 2, 1, 1 }
    };
    int vitoriaO_4[3][3]= {   { 2, 0, 0 },
                              { 1, 2, 0 },
                              { 1, 1, 2 }
    };
    int vitoriaO_5[3][3]= {   { 1, 0, 2 },
                              { 1, 2, 0 },
                              { 2, 1, 1 }
    };
    int vitoriaO_6[3][3]= {   { 2, 2, 2 },
                              { 1, 1, 0 },
                              { 2, 1, 1 }
    };
    int vitoriaO_7[3][3]= {   { 0, 1, 0 },
                              { 2, 2, 2 },
                              { 2, 1, 1 }
    };
    int vitoriaO_8[3][3]= {   { 0, 1, 0 },
                              { 1, 0, 1 },
                              { 2, 2, 2 }
    };
    // Empate
    int empate1[3][3]= {      { 1, 2, 1 },
                              { 1, 2, 1 },
                              { 2, 1, 2 }
    };
    // Invalidos
    int tudoX[3][3]= {        { 1, 1, 1 },
                              { 1, 1, 1 },
                              { 1, 1, 1 }
    };
    int tudoO[3][3]= {        { 2, 2, 2 },
                              { 2, 2, 2 },
                              { 2, 2, 2 }
    };
    int impossivel1[3][3]= {  { 2, 1, 2 },
                              { 2, 1, 2 },
                              { 2, 1, 2 }
    };
    int impossivel2[3][3]= {  { 1, 1, 1 },
                              { 2, 1, 1 },
                              { 2, 1, 2 }
    };
    int impossivel3[3][3]= {  { 1, 1, 1 },
                              { 0, 0, 0 },
                              { 2, 2, 2 }
    };
    // indefinidos
    int indefinido1[3][3]= {  { 0, 0, 0 },
                              { 0, 0, 1 },
                              { 2, 0, 2 }
    };
    // Testes
    // X vence
    REQUIRE(VerificaVelha(vitoriaX_1) == 1);
    REQUIRE(VerificaVelha(vitoriaX_2) == 1);
    REQUIRE(VerificaVelha(vitoriaX_3) == 1);
    REQUIRE(VerificaVelha(vitoriaX_4) == 1);
    REQUIRE(VerificaVelha(vitoriaX_5) == 1);
    REQUIRE(VerificaVelha(vitoriaX_6) == 1);
    REQUIRE(VerificaVelha(vitoriaX_7) == 1);
    REQUIRE(VerificaVelha(vitoriaX_8) == 1);
    // O vence
    REQUIRE(VerificaVelha(vitoriaO_1) == 2);
    REQUIRE(VerificaVelha(vitoriaO_2) == 2);
    REQUIRE(VerificaVelha(vitoriaO_3) == 2);
    REQUIRE(VerificaVelha(vitoriaO_4) == 2);
    REQUIRE(VerificaVelha(vitoriaO_5) == 2);
    REQUIRE(VerificaVelha(vitoriaO_6) == 2);
    REQUIRE(VerificaVelha(vitoriaO_7) == 2);
    REQUIRE(VerificaVelha(vitoriaO_8) == 2);
    // Jogos invalidos
    REQUIRE(VerificaVelha(tudoX) == -2);
    REQUIRE(VerificaVelha(tudoO) == -2);
    REQUIRE(VerificaVelha(impossivel1) == -2);
    REQUIRE(VerificaVelha(impossivel2) == -2);
    REQUIRE(VerificaVelha(impossivel3) == -2);
    // indefinidos
    REQUIRE(VerificaVelha(indefinido1) == -1);
    // empate
    REQUIRE(VerificaVelha(empate1) == 0);
}

