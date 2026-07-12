/**
 * @file main.cpp
 * @brief Programa principal: demuestra el polimorfismo dinámico y el dispatch
 * doble sobre la jerarquía Motor -> {MotorGasolina, MotorElectrico}.
 * -----------------------------------------------------------------------------
 * @author Douglas Velez Monginaite | Código 202516737-3743
 * @email douglas.velez@correounivalle.edu.co
 *
 * @author Juan Diego Lopez Gomez | Código 202519861-3743
 * @email juan.lopez.g@correounivalle.edu.co
 *
 * @author Nicolas Andres Ramirez | Código 202415510-3743
 * @email nicolas.andres.ramirez@correounivalle.edu.co
 *
 */

#include <iostream>
#include <vector>
#include "Motor.h"
#include "MotorGasolina.h"
#include "MotorElectrico.h"
#include "DiagnosticSystem.h"

int main() {
    // Vector de punteros a la clase base abstracta Motor.
    std::vector<Motor*> motores;
    motores.push_back(new MotorGasolina());
    motores.push_back(new MotorElectrico());

    // Dispatch simple: mismo llamado, comportamiento distinto según el tipo real.
    for (Motor* motor : motores) {
        motor->mostrarMotor();
        motor->arrancar();
        std::cout << std::endl;
    }

    // Dispatch doble: resolución dinámica (tipo de Motor) + estática (sobrecarga en DiagnosticSystem).
    std::cout << "--- Sistema de diagnostico ---" << std::endl;
    DiagnosticSystem diagnostico;
    for (Motor* motor : motores) {
        motor->aceptarDiagnostico(diagnostico);
        std::cout << std::endl;
    }

    // Liberar la memoria reservada dinámicamente.
    for (Motor* motor : motores) {
        delete motor;
    }
    motores.clear();

    return 0;
}
