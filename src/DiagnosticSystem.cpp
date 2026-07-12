/**
 * @file DiagnosticSystem.cpp
 * @brief Implementación de la clase DiagnosticSystem.
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

#include "DiagnosticSystem.h"
#include <iostream>

// Diagnóstico específico para motores de gasolina.
void DiagnosticSystem::diagnosticar(const MotorGasolina& motor) const {
    motor.mostrarMotor();
    std::cout << "Diagnostico recomendado:" << std::endl;
    std::cout << "- Revisar bujias." << std::endl;
    std::cout << "- Comprobar nivel de aceite." << std::endl;
}

// Diagnóstico específico para motores eléctricos.
void DiagnosticSystem::diagnosticar(const MotorElectrico& motor) const {
    motor.mostrarMotor();
    std::cout << "Diagnostico recomendado:" << std::endl;
    std::cout << "- Verificar nivel de carga de la bateria." << std::endl;
    std::cout << "- Comprobar aislamiento de los cables." << std::endl;
}
