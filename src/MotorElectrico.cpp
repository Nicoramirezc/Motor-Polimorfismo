/**
 * @file MotorElectrico.cpp
 * @brief Implementación de la clase MotorElectrico.
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

#include "MotorElectrico.h"
#include "DiagnosticSystem.h"
#include <iostream>

// Simula el arranque e informa el consumo estimado.
void MotorElectrico::arrancar() const {
    std::cout << "El motor electrico esta arrancando..." << std::endl;
    std::cout << "Consumo estimado: 150 watts por km" << std::endl;
}

// Imprime los datos técnicos del motor eléctrico.
void MotorElectrico::mostrarMotor() const {
    std::cout << "Informacion del Motor Electrico:" << std::endl;
    std::cout << "- Potencia nominal: 200 kW" << std::endl;
    std::cout << "- Torque instantaneo: 400 Nm" << std::endl;
    std::cout << "- Eficiencia energetica: 95%" << std::endl;
}

// *this ya es MotorElectrico: la sobrecarga se resuelve en compilación (dispatch doble).
void MotorElectrico::aceptarDiagnostico(DiagnosticSystem& diagnostico) const {
    diagnostico.diagnosticar(*this);
}
