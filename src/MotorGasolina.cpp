/**
 * @file MotorGasolina.cpp
 * @brief Implementación de la clase MotorGasolina.
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

#include "MotorGasolina.h"
#include "DiagnosticSystem.h"
#include <iostream>

// Simula el arranque e informa el consumo estimado.
void MotorGasolina::arrancar() const {
    std::cout << "El motor de gasolina esta arrancando..." << std::endl;
    std::cout << "Consumo estimado: 0.08 litros por km" << std::endl;
}

// Imprime los datos técnicos del motor de gasolina.
void MotorGasolina::mostrarMotor() const {
    std::cout << "Informacion del Motor de Gasolina:" << std::endl;
    std::cout << "- Numero de pistones: 4" << std::endl;
    std::cout << "- Torque: 250 Nm" << std::endl;
    std::cout << "- Potencia: 150 HP" << std::endl;
}

// *this ya es MotorGasolina: la sobrecarga se resuelve en compilación (dispatch doble).
void MotorGasolina::aceptarDiagnostico(DiagnosticSystem& diagnostico) const {
    diagnostico.diagnosticar(*this);
}
