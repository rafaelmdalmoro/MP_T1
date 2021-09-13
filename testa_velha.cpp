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

TEST_CASE("Testa velha", "[single-file]") {
    int vitoriaX_1[3][3]= {   { 2, 0, 1 },
	                          { 2, 0, 1 },
						      { 0, 2, 1 }
    };
    REQUIRE(VerificaVelha(vitoriaX_1) == 1);
}
