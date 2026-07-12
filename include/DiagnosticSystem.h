/**
 * @file DiagnosticSystem.h
 * @brief Declaración de DiagnosticSystem, encargada del diagnóstico de cada motor.
 *
 * @details
 * Responsabilidades:
 * - Sobrecargar diagnosticar() para MotorGasolina y MotorElectrico (polimorfismo estático).
 * - Completar, junto con Motor::aceptarDiagnostico(), el patrón de dispatch doble.
 *
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

#ifndef DIAGNOSTIC_SYSTEM_H
#define DIAGNOSTIC_SYSTEM_H

#include "MotorGasolina.h"
#include "MotorElectrico.h"

// Ejecuta diagnósticos específicos según el tipo concreto de motor recibido.
class DiagnosticSystem {
public:
    // Diagnóstico para un motor de gasolina.
    void diagnosticar(const MotorGasolina& motor) const;

    // Diagnóstico para un motor eléctrico.
    void diagnosticar(const MotorElectrico& motor) const;
};

#endif // DIAGNOSTIC_SYSTEM_H
